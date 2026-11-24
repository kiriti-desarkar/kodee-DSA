# Bubble sort: shrink the end, stop early

After each pass the biggest bubble rises to `sortedEnd`, so the next pass stops one earlier; and if a pass made no swap, the array is sorted: stop.

```
for sortedEnd from size - 1 down to 1:
    swapped = false
    for currBubble from 0 to sortedEnd - 1:
        nextBubble = currBubble + 1
        if nums[currBubble] > nums[nextBubble]:
            swap nums[currBubble] and nums[nextBubble]
            swapped = true
    if not swapped:
        stop            // already sorted
```

Dry run on `[7, 2, 8, 1, 5]` (the sort's own example):

| sortedEnd | pass result | swapped? |
|---|---|---|
| 4 | [2, 7, 1, 5, 8] | yes |
| 3 | [2, 1, 5, 7, 8] | yes |
| 2 | [1, 2, 5, 7, 8] | yes |
| 1 | [1, 2, 5, 7, 8] | no -> stop |

Worst case (reversed input) still O(n²); best case (sorted) one pass, O(n). O(1) extra space. Stable: equal numbers never swap.
