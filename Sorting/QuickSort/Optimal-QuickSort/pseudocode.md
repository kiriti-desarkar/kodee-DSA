# Quick sort (last number as pivot)

Partition around the last number (pivot): scan moves left to right, and everything ≤ pivot is swapped behind the wall. The pivot lands at the wall, then sort each side.

```
sortRange(low, high):
    if low >= high: return
    pivotSpot = partition(low, high)
    sortRange(low, pivotSpot - 1)
    sortRange(pivotSpot + 1, high)

partition(low, high):
    pivot = nums[high]
    wall = low
    for scan from low to high - 1:
        if nums[scan] <= pivot:
            swap nums[wall] and nums[scan]
            wall = wall + 1
    swap nums[wall] and nums[high]
    return wall
```

Dry run on Example 1:

partition([7, 2, 8, 1, 5]), pivot = 5:

| scan | value | <= 5? | wall after | array |
|---|---|---|---|---|
| 0 | 7 | no | 0 | [7, 2, 8, 1, 5] |
| 1 | 2 | yes | 1 | [2, 7, 8, 1, 5] |
| 2 | 8 | no | 1 | [2, 7, 8, 1, 5] |
| 3 | 1 | yes | 2 | [2, 1, 8, 7, 5] |
| end | pivot to wall | | | [2, 1, 5, 7, 8] |

5 is final; sort [2, 1] and [7, 8].

Average O(n log n); worst O(n²) when the pivot is always the smallest or biggest (sorted input with a last-number pivot). Extra space: the recursion, O(log n) on average. Not stable. A random pivot makes the worst case very unlikely.
