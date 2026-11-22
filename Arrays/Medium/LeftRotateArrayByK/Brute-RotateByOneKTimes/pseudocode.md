# Brute: rotate by one, k times

Rotate by one, k times (k % size times, since rotating size times changes nothing).

```
rounds = k % size
repeat rounds times:
    first = nums[0]
    for scan from 1 to size - 1:
        nums[scan - 1] = nums[scan]
    nums[size - 1] = first
```

O(n · k) time: with k near n, O(n²). O(1) extra space.
