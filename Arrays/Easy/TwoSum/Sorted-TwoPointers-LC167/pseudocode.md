# R3 Sorted (LeetCode 167): two pointers, O(1) space, 1-based answer
```
left = 0;  right = n-1
while left < right:
    sum = nums[left] + nums[right]
    if sum == target: return [left + 1, right + 1]
    if sum < target: left = left + 1
    else: right = right - 1
return []
```
Proof it never skips the answer: if the sum is too small, nums[left] plus ANY number still in range is at most that sum, so nums[left] can't be in the answer: drop left. Too big: drop right, by the mirror argument.
Check on eight sorted cards [1, 2, 4, 5, 10, 13, 14, 16], target 9: 1 + 16, 1 + 14, 1 + 13, 1 + 10 too big (right moves in each time), 1 + 5 = 6 too small (left up), 2 + 5 = 7 too small (left up), 4 + 5 = 9 → [3, 4] (1-based).
Why not sort LeetCode 1: sorting scrambles the positions it asks for, and costs n log n.
Complexity: O(n) time, O(1) extra space.
