# Brute: a second array

Copy everyone one step left into a new array, put the first number at the end, copy back.

```
moved = new array of size
for scan from 1 to size - 1:
    moved[scan - 1] = nums[scan]
moved[size - 1] = nums[0]
copy moved back into nums
```

O(n) time, O(n) extra space for moved.
