# Brute: linear search

Linear search: check every number from the left. It ignores the one thing we were given: the array is sorted.

```
for scan from 0 to size - 1:
    if nums[scan] == target:
        return scan
return -1
```

O(n): a million books, up to a million looks. It never uses the fact that the shelf is sorted.
