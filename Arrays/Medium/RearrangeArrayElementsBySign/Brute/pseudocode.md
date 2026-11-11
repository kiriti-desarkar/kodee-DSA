# Brute force: two lists, then weave

```
positives = []
negatives = []
for scan from 0 to size - 1:
    if nums[scan] > 0:
        positives.add(nums[scan])
    else:
        negatives.add(nums[scan])
result = new list of size
for pair from 0 to size / 2 - 1:
    result[2 * pair]     = positives[pair]
    result[2 * pair + 1] = negatives[pair]
return result
```

Dry run on `[-1, 2, -3, 4]`:

| scan | value | positives | negatives |
|---|---|---|---|
| 0 | -1 | [] | [-1] |
| 1 | 2 | [2] | [-1] |
| 2 | -3 | [2] | [-1, -3] |
| 3 | 4 | [2, 4] | [-1, -3] |

Weave: pair 0 puts `2, -1` on seats 0, 1; pair 1 puts `4, -3` on seats 2, 3. Result `[2, -1, 4, -3]`.

Why it is right: each list is collected left to right, so it keeps its order. Equal sizes mean no pair is missing. Pair `p` lands on seats `2p` and `2p + 1`.

Time: O(n), but two passes. Extra space: O(n) (two half-lists, plus the result). It is already linear; the cost is the second pass and the extra lists.
