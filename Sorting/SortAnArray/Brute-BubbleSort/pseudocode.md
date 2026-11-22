# Bubble sort

Bubble sort: swap neighbours that are out of order, shrink the end after each pass, stop early if a pass made no swap.

```
end = size - 1
while end > 0:
    swapped = false
    for scan from 0 to end - 1:
        if nums[scan] > nums[scan + 1]:
            swap them; swapped = true
    if not swapped: stop
    end = end - 1
return nums
```

O(n²) worst case, O(n) when already sorted. LeetCode 912 times out with this on its biggest tests.
