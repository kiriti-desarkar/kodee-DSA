# Optimal: two pointers

Two pointers: copy a value forward only when it differs from the last kept one.

```
write = 1
for read from 1 to size - 1:
    if nums[read] != nums[write - 1]:
        nums[write] = nums[read]
        write = write + 1
return write
```

Dry run on Example 1:

On [0, 0, 1, 1, 2]:

| read | value | kept last | action | write |
|---|---|---|---|---|
| 1 | 0 | 0 | same, skip | 1 |
| 2 | 1 | 0 | copy to 1 | 2 |
| 3 | 1 | 1 | same, skip | 2 |
| 4 | 2 | 1 | copy to 2 | 3 |

k = 3, front [0, 1, 2].

One pass: O(n) time, O(1) extra space.
