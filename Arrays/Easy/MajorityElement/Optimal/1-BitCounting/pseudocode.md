# Optimal 1: Bit Counting (integers only)

## Derive it under stress
1. **What costs me now?** The table of counts. A million books with half a million different volumes fills the memory.
2. **Can I avoid keeping a count per volume?** Every number is made of only 32 bits.
3. **Can I vote per bit instead?** Yes: count the ones at each bit. A bit with more than half the votes belongs to the answer.

## Pseudocode
```
majorityElement(shelf):
    size = number of books in shelf
    answer = 0
    for bit from 0 to 31:
        ones = 0
        for volume in shelf:
            if (volume >> bit) & 1 == 1:
                ones = ones + 1
        if ones > size / 2:
            answer = answer with bit number "bit" turned on
    return answer
```
`(volume >> bit) & 1` reads one bit: the shift slides that bit to the end, and `& 1` keeps only that last bit (0 or 1).

## Why it works (proof)
Look at one bit. The majority has more than half of the books.
- If the majority has a 1 at this bit, its own copies already give more than half the ones. We count a 1 here.
- If it has a 0, more than half the books have a 0 here, so the ones can't pass half. We count a 0.

Either way, the vote at each bit matches the majority's bit.

## Dry run: shelf = [3, 7, 7, 5, 7] (3 = 011, 7 = 111, 5 = 101), size = 5, so we need ones above 2
| bit | books with a 1 there | ones | answer so far |
|---|---|---|---|
| 0 | 3, 7, 7, 5, 7 | 5 | 001 |
| 1 | 3, 7, 7, 7 | 4 | 011 |
| 2 | 7, 7, 5, 7 | 4 | 111 |
| 3 to 31 | none | 0 | 111 = 7 |

## Cost
- Time O(32 x n) = O(n): 32 passes over the shelf. 32 is a constant.
- Extra space O(1): a few variables. The shelf is never touched.
- Integers only. Titles (strings) have no fixed 32 bits to count.

## Negative numbers (the sign bit)
- Java `int` and JavaScript (`|` and `<<` work on 32-bit signed ints): turning bit 31 on gives the right negative number directly.
- C++: `answer` is an `unsigned int` and the shift is `1u << bit`, because shifting a 1 into the sign bit of a signed `int` is not safe. Cast back to `int` at the end.
- Python: `>>` on a negative number keeps its sign bits, so the votes are right, but ints have no fixed size. If `answer >= 2 ** 31`, subtract `2 ** 32` to get the negative number back (all 32 ones, 4294967295, becomes -1).
