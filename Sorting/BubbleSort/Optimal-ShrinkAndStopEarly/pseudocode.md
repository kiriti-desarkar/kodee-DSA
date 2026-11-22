# Optimal: shrink the end, stop early

After each pass the biggest number is parked at the end, so shrink end by one; and if a pass made no swap, the array is sorted: stop.

```
end = size - 1
while end > 0:
    swapped = false
    for scan from 0 to end - 1:
        if nums[scan] > nums[scan + 1]:
            swap nums[scan] and nums[scan + 1]
            swapped = true
    if not swapped:
        stop            // sorted already
    end = end - 1       // the biggest is parked at end
```

Dry run on Example 1:

| end | pass result | swapped? |
|---|---|---|
| 4 | [2, 7, 1, 5, 8] | yes |
| 3 | [2, 1, 5, 7, 8] | yes |
| 2 | [1, 2, 5, 7, 8] | yes |
| 1 | [1, 2, 5, 7, 8] | no -> stop |

Worst case (reversed input) still O(n²); best case (sorted) one pass, O(n). O(1) extra space. Stable: equal numbers never swap.
