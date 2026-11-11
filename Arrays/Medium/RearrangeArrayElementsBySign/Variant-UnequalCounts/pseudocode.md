# Variant: unequal counts (Alternate Positive Negative, GeeksforGeeks)

The counts of positive and negative numbers can differ, and **0 counts as positive**. Alternate, starting with a positive, while both kinds last; then append the leftovers in their original order.

Why the one-pass seat trick breaks: `[3, -1, 5, 7]` would put 7 on seat 4 of a size-four array (off the end).

```
positives = []
negatives = []
for scan from 0 to size - 1:
    if nums[scan] >= 0:
        positives.add(nums[scan])
    else:
        negatives.add(nums[scan])
result = []
pair = 0
while pair < positives.size and pair < negatives.size:
    result.add(positives[pair])
    result.add(negatives[pair])
    pair += 1
while pair < positives.size:
    result.add(positives[pair])
    pair += 1
while pair < negatives.size:
    result.add(negatives[pair])
    pair += 1
return result
```

Dry run on `[9, 4, -2, -1, 5, 0, -5, -3, 2]`: positives `[9, 4, 5, 0, 2]`, negatives `[-2, -1, -5, -3]`. Weave 4 pairs: `[9, -2, 4, -1, 5, -5, 0, -3]`, then append the leftover `2`: `[9, -2, 4, -1, 5, -5, 0, -3, 2]`.

Second example `[-5, -2, 5, 2, 4, 7, 1, 8, 0, -8]`: positives `[5, 2, 4, 7, 1, 8, 0]`, negatives `[-5, -2, -8]`. Weave 3 pairs, then append `7, 1, 8, 0`: `[5, -5, 2, -2, 4, -8, 7, 1, 8, 0]`.

More: `[3, -1, 5, 7]` -> `[3, -1, 5, 7]`; `[-4, -2]` -> `[-4, -2]` (only minus numbers, so the weave never runs and the leftovers are the whole list).

Why it is right: both piles keep their order. We alternate until the shorter pile runs out; what is left is all one sign, so it can only be appended in order.

Time: O(n). Extra space: O(n). Zero note: LeetCode 2149 has no zeros; this variant counts 0 as positive.
