# Optimal: two pointers

Two pointers in place: swap each non-zero forward to the next free spot.

```
write = 0
for read from 0 to size - 1:
    if nums[read] != 0:
        swap nums[write] and nums[read]
        write = write + 1
```

Dry run on Example 1:

| read | value | action | array | write |
|---|---|---|---|---|
| 0 | 0 | skip | [0, 1, 0, 3, 12] | 0 |
| 1 | 1 | swap with 0 | [1, 0, 0, 3, 12] | 1 |
| 2 | 0 | skip | [1, 0, 0, 3, 12] | 1 |
| 3 | 3 | swap with 1 | [1, 3, 0, 0, 12] | 2 |
| 4 | 12 | swap with 2 | [1, 3, 12, 0, 0] | 3 |

One pass: O(n) time, O(1) extra space.
