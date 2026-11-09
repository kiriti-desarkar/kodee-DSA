# Optimal: right to left, carry maxRight

```
maxRight = nums[size - 1]
leaders = [maxRight]
for scan from size - 2 down to 0:
    if nums[scan] > maxRight:
        maxRight = nums[scan]
        leaders.add(maxRight)
reverse(leaders)
return leaders
```

Dry run on `[4, 9, 2, 6, 3]` (maxRight starts at 3, leaders `[3]`):

| scan | value | beats maxRight? | maxRight | leaders |
|---|---|---|---|---|
| 3 | 6 | yes | 6 | [3, 6] |
| 2 | 2 | no | 6 | [3, 6] |
| 1 | 9 | yes | 9 | [3, 6, 9] |
| 0 | 4 | no | 9 | [3, 6, 9] |

Reverse -> `[9, 6, 3]`.

Time: one pass, O(n). A million numbers: about 1 million steps, about 1 millisecond. Extra space: O(1) (the output is the answer). Seeding `maxRight` with `nums[size - 1]` (not a minimum value) stays correct even if the array holds the smallest possible integer. Assumes the array has at least one number.

Edge cases: one number -> itself. All equal -> only the last. Strictly decreasing -> everyone. Strictly increasing -> only the last.
