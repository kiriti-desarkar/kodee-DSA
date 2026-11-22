# Brute: copy the non-zeros

Copy the non-zeros to a temp array, then write them back and fill zeros.

```
nonZeros = every number in nums that is not 0
for spot from 0 to size - 1:
    if spot < length of nonZeros: nums[spot] = nonZeros[spot]
    else: nums[spot] = 0
```

O(n) time but O(n) extra space for the copy.
