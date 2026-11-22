# Selection sort

For each position sortedEnd, scan the rest for the smallest number (minSpot) and swap it in. At most n - 1 swaps: the fewest moves of the simple sorts.

```
for sortedEnd from 0 to size - 2:
    minSpot = sortedEnd
    for scan from sortedEnd + 1 to size - 1:
        if nums[scan] < nums[minSpot]:
            minSpot = scan
    if minSpot != sortedEnd:
        swap nums[sortedEnd] and nums[minSpot]
```

Dry run on Example 1:

| sortedEnd | minSpot (value) | array after the swap |
|---|---|---|
| 0 | 3 (1) | [1, 2, 8, 7, 5] |
| 1 | 1 (2) | [1, 2, 8, 7, 5] (already in place, no swap) |
| 2 | 4 (5) | [1, 2, 5, 7, 8] |
| 3 | 3 (7) | [1, 2, 5, 7, 8] |

Always about n²/2 comparisons: O(n²), even on sorted input. At most n - 1 swaps. O(1) extra space. Not stable (a swap can jump over an equal number).
