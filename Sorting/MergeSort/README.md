# Merge Sort (interview style)

Video: "I Had 5 Minutes to Write Merge Sort" on LearnWithKiriti (Kodee and Mr. Tock).

| Folder | Approach | Time | Extra space | Stable |
|---|---|---|---|---|
| `Optimal-MergeSort/` | Slice down to single items, merge sorted halves back up | O(n log n) always | O(n) | yes (`<=` takes ties from the left) |

## Rebuild it from the name
**Merge? Slice first!** You can only merge two *sorted* arrays (smaller front goes first). To get sorted arrays,
slice the array in half again and again until every piece has one item. One item is already sorted. Merge back up.

## Pseudocode
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

## Why n log n
Halving 8 items: 8 -> 4 -> 2 -> 1, three levels (log₂ 8). Every level merges all n items once.
log n levels × n work = O(n log n), in the best, average and worst case. For a million numbers that is
about 20 million steps (about 0.02 seconds at a billion steps a second).

## Without recursion (bottom-up)
Merge pairs of singles, then pairs of 2s, then 4s, and so on, with a loop. Same merge, same O(n log n).

Every program prints `1 2 5 8` for `[5, 2, 8, 1]` (the part under "Run it locally"); the solution itself is the
same code as the practice panel's Start menu on learnwithkiriti.com.
