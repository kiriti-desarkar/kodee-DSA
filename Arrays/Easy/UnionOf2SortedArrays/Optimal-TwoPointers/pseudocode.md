# Optimal: two pointers

Two pointers: take the smaller value, skip it if it equals the last one taken.

```
spotA = 0, spotB = 0, result = []
while spotA < n or spotB < m:
    if nums2 is used up, or (nums1 has values and nums1[spotA] <= nums2[spotB]):
        next = nums1[spotA]; spotA = spotA + 1
    else:
        next = nums2[spotB]; spotB = spotB + 1
    if result is empty or its last value != next:
        append next to result
return result
```

O(n + m) time; O(1) extra space besides the answer.
