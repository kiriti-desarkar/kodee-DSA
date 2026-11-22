# Brute: swap it into place

Take the next number and swap it left, one neighbour at a time, until the number on its left is not bigger. Three writes per step.

```
for next from 1 to size - 1:
    slot = next
    while slot > 0 and nums[slot - 1] > nums[slot]:
        swap nums[slot] and nums[slot - 1]
        slot = slot - 1
```

Dry run on Example 1:

| next | value | array after inserting |
|---|---|---|
| 1 | 2 | [2, 7, 8, 1, 5] |
| 2 | 8 | [2, 7, 8, 1, 5] |
| 3 | 1 | [1, 2, 7, 8, 5] (3 swaps) |
| 4 | 5 | [1, 2, 5, 7, 8] (2 swaps) |

O(n²) worst case, O(n) on sorted input. Each swap is three writes.
