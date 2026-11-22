# Optimal: make room, then insert

Hold the next number, shift every bigger number one step right to make room, then drop the held number into the gap (slot). One write per step.

```
for next from 1 to size - 1:
    held = nums[next]
    slot = next
    while slot > 0 and nums[slot - 1] > held:
        nums[slot] = nums[slot - 1]     // shift right
        slot = slot - 1
    nums[slot] = held
```

Dry run on Example 1:

Inserting 1 (next = 3) into [2, 7, 8 | 1, 5]:

| slot | shift | array |
|---|---|---|
| 3 | 8 moves right | [2, 7, 8, 8, 5] |
| 2 | 7 moves right | [2, 7, 7, 8, 5] |
| 1 | 2 moves right | [2, 2, 7, 8, 5] |
| 0 | stop, write held | [1, 2, 7, 8, 5] |

O(n²) worst case (reversed), O(n) best case (already sorted), great for almost-sorted data. O(1) extra space. Stable.
