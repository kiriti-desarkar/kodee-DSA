# Brute: n - 1 full passes

Make n - 1 full passes over the whole array, swapping every out-of-order pair. Simple, but it keeps checking the end even after it is sorted.

```
repeat size - 1 times:
    for scan from 0 to size - 2:
        if nums[scan] > nums[scan + 1]:
            swap nums[scan] and nums[scan + 1]
```

Dry run on Example 1:

| pass | array after the pass |
|---|---|
| start | [7, 2, 8, 1, 5] |
| 1 | [2, 7, 1, 5, 8] |
| 2 | [2, 1, 5, 7, 8] |
| 3 | [1, 2, 5, 7, 8] |
| 4 | [1, 2, 5, 7, 8] (nothing to do, but it still walks the whole array) |

Always (n - 1) x (n - 1) comparisons: O(n²) even when the input is already sorted. O(1) extra space.
