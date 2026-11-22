# Optimal: three reversals

Three reversals: reverse the first k, reverse the rest, reverse everything. Two blocks swap places and each keeps its order.

```
k = k % size
if k == 0: return
reverse(nums, 0, k - 1)
reverse(nums, k, size - 1)
reverse(nums, 0, size - 1)

reverse(nums, left, right):
    while left < right:
        swap nums[left] and nums[right]
        left = left + 1
        right = right - 1
```

Dry run on Example 1:

| step | array |
|---|---|
| start | [1, 2, 3, 4, 5, 6, 7] |
| reverse 0..2 | [3, 2, 1, 4, 5, 6, 7] |
| reverse 3..6 | [3, 2, 1, 7, 6, 5, 4] |
| reverse 0..6 | [4, 5, 6, 7, 1, 2, 3] |

Every number is swapped twice at most: O(n) time, O(1) extra space.
