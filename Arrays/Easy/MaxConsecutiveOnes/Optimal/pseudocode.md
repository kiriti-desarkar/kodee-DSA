# Optimal: one pass

One pass: current counts the run you are in, a 0 resets it, and maxCount is updated inside the 1 branch, so a run that ends the array is not lost.

```
maxCount = 0
current = 0
for each light in nums:
    if light == 1:
        current = current + 1
        if current > maxCount: maxCount = current
    else:
        current = 0
return maxCount
```

Dry run on Example 1:

| light | current | maxCount |
|---|---|---|
| 1 | 1 | 1 |
| 1 | 2 | 2 |
| 0 | 0 | 2 |
| 1 | 1 | 2 |
| 1 | 2 | 2 |
| 1 | 3 | 3 |

O(n) time, O(1) extra space.
