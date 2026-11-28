# Follow-up: k-Sum (any k)
```
fourSum(nums, target):
    sort nums
    return kSum(nums, target, start = 0, k = 4)

kSum(nums, target, start, k):
    groups = empty list
    if k == 2:
        squeeze left = start, right = last (skip repeats after a hit)
        return the pairs
    for each pick from start, leaving room for k - 1 more:
        pick > start and same as the one before? skip
        for each rest in kSum(nums, target - nums[pick], pick + 1, k - 1):
            add [nums[pick]] + rest to groups
return groups
```
Derivation: 3Sum fixed one number and ran Two Sum; 4Sum fixed two. Every level does the same job: fix one number, then solve the same problem with one number fewer. So write that job once and let it call itself until two numbers are left.
`pick > start` is the same rule as `second > first + 1`: the first pick at a level may equal the number before it.
No backtracking list to undo: each call returns finished groups and the caller puts its own number in front.
Complexity: O(n^(k-1)) time (k - 2 fixed numbers, then an O(n) squeeze), O(k) for the calls. k = 4 gives O(n³).
