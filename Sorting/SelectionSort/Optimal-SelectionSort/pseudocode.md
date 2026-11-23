# Selection sort

For each frontSlot, check every candidate in the rest, remember the smallest (smallestSpot), and swap it into frontSlot. At most n - 1 swaps: the fewest moves of the simple sorts.

```
for frontSlot from 0 to size - 2:
    smallestSpot = frontSlot
    for candidate from frontSlot + 1 to size - 1:
        if nums[candidate] < nums[smallestSpot]:
            smallestSpot = candidate
    if smallestSpot != frontSlot:
        swap nums[frontSlot] and nums[smallestSpot]
```

Dry run on Example 1:

| frontSlot | smallestSpot (value) | array after the swap |
|---|---|---|
| 0 | 3 (1) | [1, 2, 8, 7, 5] |
| 1 | 1 (2) | [1, 2, 8, 7, 5] (already in place, no swap) |
| 2 | 4 (5) | [1, 2, 5, 7, 8] |
| 3 | 3 (7) | [1, 2, 5, 7, 8] |

Always about n²/2 comparisons: O(n²), even on sorted input. At most n - 1 swaps. O(1) extra space. Not stable (a swap can jump over an equal number).
