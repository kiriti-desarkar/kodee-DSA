# Insertion sort: make room, then insert

Take the newBook, shift every bigger book one step right to make room, then drop newBook into the gap. One write per step.

```
for newBookSpot from 1 to size - 1:
    newBook = nums[newBookSpot]
    gap = newBookSpot
    while gap > 0 and nums[gap - 1] > newBook:
        nums[gap] = nums[gap - 1]     // shift right
        gap = gap - 1
    nums[gap] = newBook
```

Dry run on `[7, 2, 8, 1, 5]` (the sort's own example):

Inserting 1 (newBookSpot = 3) into [2, 7, 8 | 1, 5]:

| gap | shift | array |
|---|---|---|
| 3 | 8 moves right | [2, 7, 8, 8, 5] |
| 2 | 7 moves right | [2, 7, 7, 8, 5] |
| 1 | 2 moves right | [2, 2, 7, 8, 5] |
| 0 | stop, write newBook | [1, 2, 7, 8, 5] |

O(n²) worst case (reversed), O(n) best case (already sorted), great for almost-sorted data. O(1) extra space. Stable.
