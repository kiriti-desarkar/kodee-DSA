# Optimal 2: Binary Search (sorted, one array much smaller, LeetCode follow-up 2)

## Derive it under stress
1. **Which part costs the most?** Walking the huge shelf, book by book.
2. **What do I need for each small book?** Only one answer: is it on the big shelf, and where?
3. **How do I find one thing fast on a sorted shelf?** Binary search.

**The duplicate trap:** both 2s from `shelfA` would find the SAME 2 in `shelfB`. The fix is a bookmark, `fromSpot`. After a match, the next search starts just after it.

## Pseudocode
```
intersectBinary(shelfA, shelfB):      # shelfA is the small shelf
    common = empty list
    fromSpot = 0
    for book in shelfA:
        found = lowerBound(shelfB, book, fromSpot)
        if found < sizeB and shelfB[found] == book:
            add book to common
            fromSpot = found + 1
    return common

lowerBound(shelf, value, fromSpot):
    low = fromSpot
    high = size of shelf
    while low < high:
        middle = low + (high - low) / 2, rounded down
        if shelf[middle] < value:
            low = middle + 1
        else:
            high = middle
    return low
```
`lowerBound` returns the first spot (from `fromSpot` on) whose value is at least `value`.

## Why it works (proof)
- Everything to the left of `fromSpot` is smaller, or already paired. `shelfA` is sorted too, so later books never need it.
- `lowerBound` finds the FIRST unused copy, so each copy in `shelfB` is used once at most.
- You get `min(countA, countB)` copies of every value.

## Why not just Two Pointers and stop when the small shelf ends?
It does stop there, but the small shelf can't end until `spotB` has walked up to its books.
- shelfA = [98, 99, 100], shelfB = [1, 2, ..., 100]
- Two Pointers: `spotB` walks past 97 books before the first pair, about 100 steps.
- Binary Search: `lowerBound(98)` needs 6 halvings, then 99 and 100 take 2 and 1 more, starting from `fromSpot`. That's 9 in total.

The walking depends on the BIG shelf, so Two Pointers is O(n + m), never O(n + n). **Binary Search is Two Pointers where `spotB` jumps instead of walking.**

## When does it win?
Compare `small x log(big)` with `small + big`.
- 3 books against 100: about 3 x 7 = 21 steps, against 103.
- 4 books against 1,000,000: about 4 x 20 = 80 steps, against 1,000,004. Binary Search wins.
- Equal sizes: Two Pointers wins.

## Dry run: shelfA = [1, 2, 2, 4], shelfB = [2, 4, 4, 5]
| book | search from | found | match? | fromSpot | common |
|---|---|---|---|---|---|
| 1 | 0 | 0 (value 2) | no | 0 | [] |
| 2 | 0 | 0 (value 2) | yes | 1 | [2] |
| 2 | 1 | 1 (value 4) | no | 1 | [2] |
| 4 | 1 | 1 (value 4) | yes | 2 | [2, 4] |

## Cost
- Time O(small x log big).
- Extra space O(1).
