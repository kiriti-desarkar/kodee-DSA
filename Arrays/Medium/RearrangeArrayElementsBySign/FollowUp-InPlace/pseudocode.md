# Follow-up: "Can you do it in place?"

## Warning first: the swap trick breaks order

```
evenSeat = 0
oddSeat = 1
while evenSeat < size and oddSeat < size:
    if nums[evenSeat] > 0:
        evenSeat += 2
    else if nums[oddSeat] < 0:
        oddSeat += 2
    else:
        swap(nums[evenSeat], nums[oddSeat])
        evenSeat += 2
        oddSeat += 2
```

On the main example it happens to give the right answer, `[3, -2, 1, -5, 2, -4]`. But on the counter-example `[1, 2, 3, -4, -5, -6]`:

| step | evenSeat | oddSeat | action | nums |
|---|---|---|---|---|
| 1 | 0 | 1 | 1 is plus, move evenSeat | [1, 2, 3, -4, -5, -6] |
| 2 | 2 | 1 | 3 is plus, move evenSeat | [1, 2, 3, -4, -5, -6] |
| 3 | 4 | 1 | -5 and 2 are both on wrong seats, swap | [1, -5, 3, -4, 2, -6] |

Result **`[1, -5, 3, -4, 2, -6]` (wrong)**. The answer is **`[1, -4, 2, -5, 3, -6]`**. Signs alternate, but a swap makes a number jump over others of its own sign (-5 jumps over -4, 2 jumps over 3), so the order breaks. This is the same reason a swap-based sort is not stable. The files named `...SwapTrickBreaksOrder` run this trick only to show the wrong output.

## The order-keeping version: shift

```
for seat from 0 to size - 1:
    needsPositive = (seat is even)
    if (nums[seat] > 0) == needsPositive:
        continue
    matchIndex = seat + 1
    while (nums[matchIndex] > 0) != needsPositive:
        matchIndex += 1
    movedValue = nums[matchIndex]
    for shiftIndex from matchIndex down to seat + 1:
        nums[shiftIndex] = nums[shiftIndex - 1]
    nums[seat] = movedValue
```

Dry run on `[1, 2, 3, -4, -5, -6]`:
- Seat 0 needs plus, has 1: fine.
- Seat 1 needs minus, has 2: the first minus is at index 3. Shift 2 and 3 right (2 shifts), put -4 on seat 1: `[1, -4, 2, 3, -5, -6]`.
- Seat 2 needs plus, has 2: fine.
- Seat 3 needs minus, has 3: the first minus is at index 4. Shift 3 right (1 shift), put -5 on seat 3: `[1, -4, 2, -5, 3, -6]`.
- Seats 4 and 5 are fine. 2 fixes, 3 shifts. Result `[1, -4, 2, -5, 3, -6]`.

Why it is right: everything between `seat` and `matchIndex` has the wrong sign for this seat, and it all shifts right one step without changing its relative order. The moved number was the first of its sign after the seat, so it belongs there. A match always exists because the counts are equal.

Time: O(n^2). The worst case is all plus numbers first, then all minus numbers: m(m - 1)/2 shifts with m = n/2, about n^2/8. Extra space: O(1).

Honest verdict: order and in place cannot both be cheap. LeetCode says in place is not required, so say that in the interview and give the one-pass answer from `Optimal/`.
