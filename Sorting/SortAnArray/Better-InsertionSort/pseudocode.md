# Insertion sort

Insertion sort: hold the next number, shift bigger ones right to make room, insert.

```
for next from 1 to size - 1:
    held = nums[next]
    slot = next
    while slot > 0 and nums[slot - 1] > held:
        nums[slot] = nums[slot - 1]
        slot = slot - 1
    nums[slot] = held
return nums
```

O(n²) worst case, very fast on almost-sorted input.
