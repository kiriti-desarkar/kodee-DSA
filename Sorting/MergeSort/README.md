# Merge Sort (interview style)

Video: "I Had 5 Minutes to Write Merge Sort" on LearnWithKiriti (Kodee and Mr. Tock).

| Folder | Approach | Time | Extra space | Stable |
|---|---|---|---|---|
| `Optimal-MergeSort/` | Slice down to single items, merge sorted halves back up | O(n log n) always | O(n) | yes (`<=` takes ties from the left) |
| `Brute-InsertionSort/` (bonus, compared in Round 2) | Pick each card, slide it left into the gap | O(n²) worst, O(n) on sorted input | O(1) | yes |

A million numbers at about a billion steps a second: insertion sort's worst case needs about 500 billion steps
(about 8 minutes); merge sort needs about 20 million (about 0.02 seconds).

## Rebuild it from the name
**Merge? Slice first!** You can only merge two *sorted* arrays (smaller front goes first). To get sorted arrays,
slice the array in half again and again until every piece has one item. One item is already sorted. Merge back up.

## Pseudocode
```
insertionSort(nums):
    for pick from 1 to n - 1:
        value = nums[pick]
        scan = pick - 1
        while scan >= 0 and nums[scan] > value:
            nums[scan + 1] = nums[scan]      # shift, don't swap
            scan = scan - 1
        nums[scan + 1] = value

mergeSort(nums, low, high):
    if low >= high: return                # 0 or 1 item: already sorted
    mid = low + (high - low) / 2          # never overflows, unlike (low + high) / 2
    mergeSort(nums, low, mid)
    mergeSort(nums, mid + 1, high)
    merge(nums, low, mid, high)

merge(nums, low, mid, high):
    temp = new array of size high - low + 1
    left = low, right = mid + 1, spot = 0
    while left <= mid and right <= high:  # both halves still have numbers
        if nums[left] <= nums[right]:     # <= keeps equal items in order (stable)
            temp[spot] = nums[left]; left++
        else:
            temp[spot] = nums[right]; right++
        spot++
    copy what is left of the left half, then of the right half (only one has leftovers)
    copy temp back into nums starting at low
```

## Why n log n
Halving 8 items: 8 -> 4 -> 2 -> 1, three levels (log₂ 8). Every level merges all n items once.
log n levels × n work = O(n log n), in the best, average and worst case.

## Without recursion (bottom-up)
Merge pairs of singles, then pairs of 2s, then 4s, and so on, with a loop. Same merge, same O(n log n).

Every program here was compiled, run and random-tested; each prints `1 2 5 8` for `[5, 2, 8, 1]`.
