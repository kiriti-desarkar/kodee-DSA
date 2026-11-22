# Optimal: sum formula

Expected sum N(N+1)/2 minus the actual sum is the missing number.

```
total = size + 1
expected = total * (total + 1) / 2
actual = sum of nums
return expected - actual
```

Dry run on Example 1:

[1, 2, 4, 5]: total = 5, expected = 15, actual = 12, missing = 3.

O(n) time, O(1) extra space.
