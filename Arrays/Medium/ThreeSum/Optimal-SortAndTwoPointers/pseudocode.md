# Optimal: sort, fix first, squeeze with two pointers

```
sort nums
for first = 0 to n-3:
    if first > 0 and nums[first] == nums[first-1]: skip      (same first, same triplets)
    left = first + 1;  right = n - 1
    while left < right:
        sum = nums[first] + nums[left] + nums[right]
        if sum < 0: left = left + 1
        else if sum > 0: right = right - 1
        else:
            add [nums[first], nums[left], nums[right]]
            left = left + 1;  right = right - 1
            while left < right and nums[left] == nums[left-1]: left = left + 1
            while left < right and nums[right] == nums[right+1]: right = right - 1
return the triplets
```
Dry run on [-1, 0, 1, 2, -1, -4], sorted to [-4, -1, -1, 0, 1, 2]:

| first | left, right | sum | move |
|---|---|---|---|
| -4 | -1, 2 | -3 | too small, left up (three more times, all too small) |
| -1 | -1, 2 | 0 | add [-1, -1, 2], both move |
| -1 | 0, 1 | 0 | add [-1, 0, 1], both move, left passes right |
| -1 (again) | | | same as last first: skip |
| 0 | 1, 2 | 3 | too big, right down, done |

Answer: [[-1, -1, 2], [-1, 0, 1]].
Why sort: it gives the Two Sum II squeeze (O(1) space instead of seen) and puts repeats side by side, so no set of triplets is needed.
Proof the squeeze never skips a triplet: if the sum is too small, nums[left] with ANY right still in range is at most that sum, so nums[left] can't be in a triplet with this first: drop left. Too big: drop right, by the mirror argument.
Complexity: O(n log n) to sort + O(n²) to squeeze = O(n²) time; O(1) extra space besides sorting and the answer.
