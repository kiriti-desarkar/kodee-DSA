# Brute: search for every number

For each number 1..N, search the whole array for it.

```
total = size + 1
for wanted from 1 to total:
    if wanted is not anywhere in nums:
        return wanted
```

O(n²) time: for each wanted number, scan the whole array. O(1) extra space.
