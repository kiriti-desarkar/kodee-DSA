# Merge sort

Split in half until each piece has one number, then merge sorted halves with two pointers (leftSpot, rightSpot), always taking the smaller front number.

```
mergeSort(nums):
    mergeSortHelper(nums, 0, n - 1)

mergeSortHelper(nums, low, high):
    if low >= high: return                # 0 or 1 item: already sorted
    mid = low + (high - low) / 2          # never overflows, unlike (low + high) / 2
    mergeSortHelper(nums, low, mid)
    mergeSortHelper(nums, mid + 1, high)
    merge(nums, low, mid, high)

merge(nums, low, mid, high):
    merged = empty list
    leftSpot = low, rightSpot = mid + 1
    while leftSpot <= mid and rightSpot <= high:      # both halves still have numbers
        if nums[leftSpot] <= nums[rightSpot]:         # <= keeps equal items in order (stable)
            add nums[leftSpot] to merged; leftSpot++
        else:
            add nums[rightSpot] to merged; rightSpot++
    add what is left of the left half, then of the right half (only one has leftovers)
    copy merged back into nums starting at low
```

O(n log n) in the best, average and worst case: log n levels of halving, each merging all n numbers once. O(n) extra space (the merged list). Stable.
