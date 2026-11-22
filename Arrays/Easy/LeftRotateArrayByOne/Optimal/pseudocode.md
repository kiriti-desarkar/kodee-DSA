# Optimal: in place

Remember the first number, shift everyone one step left in place, then put the first number in the last spot.

```
first = nums[0]
for scan from 1 to size - 1:
    nums[scan - 1] = nums[scan]
nums[size - 1] = first
```

Dry run on Example 1:

| scan | array |
|---|---|
| start (first = 1) | [1, 2, 3, 4, 5] |
| 1 | [2, 2, 3, 4, 5] |
| 2 | [2, 3, 3, 4, 5] |
| 3 | [2, 3, 4, 4, 5] |
| 4 | [2, 3, 4, 5, 5] |
| end | [2, 3, 4, 5, 1] |

O(n) time, O(1) extra space.
