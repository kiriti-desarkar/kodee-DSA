# Optimal: binary search

Look at the middle (mid). If target is bigger, it can only be right of mid (low = mid + 1); if smaller, left of it (high = mid - 1). Half the shelf is gone every step.

```
low = 0
high = size - 1
while low <= high:
    mid = low + (high - low) / 2
    if nums[mid] == target: return mid
    if target > nums[mid]: low = mid + 1
    else: high = mid - 1
return -1
```

Dry run on Example 1:

Target 23 in [2, 5, 8, 12, 16, 23, 38, 56]:

| low | high | mid | nums[mid] | move |
|---|---|---|---|---|
| 0 | 7 | 3 | 12 | 23 > 12: low = 4 |
| 4 | 7 | 5 | 23 | found: 5 |

O(log n): a million books need at most 20 looks. O(1) extra space.
