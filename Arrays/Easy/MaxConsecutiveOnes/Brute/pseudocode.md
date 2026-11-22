# Brute: count from every start

From every start, count the 1s that follow, and keep the biggest count. The same 1s get counted again and again.

```
maxCount = 0
for start from 0 to size - 1:
    count = 0
    scan = start
    while scan < size and nums[scan] == 1:
        count = count + 1
        scan = scan + 1
    maxCount = max(maxCount, count)
return maxCount
```

O(n²) when the array is all 1s: every start counts the same 1s again.
