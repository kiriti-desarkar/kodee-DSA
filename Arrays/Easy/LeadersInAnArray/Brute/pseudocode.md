# Brute force

```
leaders = []
for scan from 0 to size - 1:
    isLeader = true
    for right from scan + 1 to size - 1:
        if nums[right] >= nums[scan]:
            isLeader = false
            break
    if isLeader:
        leaders.add(nums[scan])
return leaders
```

Dry run on `[4, 9, 2, 6, 3]` (6 checks in total):
- scan 4: right sees 9, bigger, break. Loses.
- scan 9: right checks 2, 6, 3. No break. Leader.
- scan 2: right sees 6, break. Loses.
- scan 6: right sees 3. Leader.
- scan 3: nothing to the right. Leader.

Result `[9, 6, 3]`.

Time: worst case a strictly decreasing list, n(n - 1) / 2 checks = O(n^2). A million numbers: 499,999,500,000 checks, about 8 minutes. Extra space: O(1).
