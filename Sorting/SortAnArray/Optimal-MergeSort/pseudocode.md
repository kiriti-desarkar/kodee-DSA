# Merge sort

Merge sort: split in half, sort each half, merge with two pointers.

```
sortRange(low, high):
    if low >= high: return
    mid = low + (high - low) / 2
    sortRange(low, mid)
    sortRange(mid + 1, high)
    merge(low, mid, high)

merge(low, mid, high):
    leftSpot = low, rightSpot = mid + 1, merged = []
    while both halves have numbers:
        take the smaller front number into merged
    copy what is left of either half
    copy merged back into nums[low .. high]
```

O(n log n) always: log n levels, n work per level. O(n) extra space for merged.
