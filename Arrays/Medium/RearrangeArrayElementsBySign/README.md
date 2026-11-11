# Rearrange Array Elements by Sign (interview style)

Video: "Rearrange Array Elements by Sign" on LearnWithKiriti (Kodee and Mr. Tock). Arrays series, episode 11. LeetCode 2149, Medium.

The array has an even length, equal numbers of positive and negative numbers, and no zeros. Return it so that signs alternate, it **starts with a positive**, and numbers of the same sign **keep their original order**. In place is not required.
Example: `[3, 1, -2, -5, 2, -4]` -> `[3, -2, 1, -5, 2, -4]`. Smaller: `[-1, 2, -3, 4]` -> `[2, -1, 4, -3]`.

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute/` | Collect positives and negatives into two lists, then weave them | O(n), two passes | O(n) (two half-lists) |
| `Optimal/` | One pass: `posIndex = 0` and `negIndex = 1`, each jumps by two | O(n), one pass | O(1) (the answer list is not counted) |
| `FollowUp-InPlace/` | "Can you do it in place?" Fix each wrong seat by shifting the first matching number into it (keeps order). Also the swap trick, kept only as a warning: it breaks order | O(n^2) | O(1) |
| `Variant-UnequalCounts/` | Counts not equal (Alternate Positive Negative on GeeksforGeeks, 0 counts as positive): weave, then append the leftovers | O(n) | O(n) |

## Rebuild it
**Plus on even, minus on odd. Jump by two.** In the answer, positives sit on seats 0, 2, 4... and negatives on seats 1, 3, 5.... The brute force puts `positives[p]` on seat `2p` every time, so skip the lists and seat each number directly: keep a "next plus seat" (starts at 0) and a "next minus seat" (starts at 1), and move each one forward by two after using it. Equal counts mean each sign fills its seats exactly.

Order and in place cannot both be cheap. The swap trick is in place and fast but breaks order (`[1, 2, 3, -4, -5, -6]` gives `[1, -5, 3, -4, 2, -6]`, not `[1, -4, 2, -5, 3, -6]`); the shift version keeps order but is O(n^2). LeetCode does not require in place, so say so in the interview and give the one-pass answer.

See the `pseudocode.md` in each folder. Every program was compiled, run and tested (the Python versions were also random-tested against a naive oracle).
