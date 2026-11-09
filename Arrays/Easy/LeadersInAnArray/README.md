# Leaders in an Array (interview style)

Video: "Leaders in an Array: 8 Minutes vs 1 Millisecond" on LearnWithKiriti (Kodee and Mr. Tock). Arrays series, episode 10.

An element is a **leader** if it is **strictly greater** than every element to its right. The last element is always a leader. Return the leaders left to right.
Example: `[4, 9, 2, 6, 3]` -> `[9, 6, 3]`. Strict means equals do not count: `[7, 4, 7, 5, 3]` -> `[7, 5, 3]`.
Related: LeetCode 1299, Replace Elements with Greatest Element on Right Side (same right-to-left scan).

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute/` | For each number, look right; stop at the first number that is bigger or equal | O(n^2), worst case a strictly decreasing list | O(1) |
| `Optimal/` | Scan right to left carrying `maxRight`; collect, reverse once | O(n) | O(1) (the answer list is not counted) |

A million numbers at about a billion steps a second: brute force worst case about 500 billion checks (about 8 minutes); one pass about 1 million steps (about 1 millisecond), roughly 500,000 times faster.

## Rebuild it
**Start at the right. Carry the max.** The inner loop of the brute force keeps asking "what is the biggest thing on my right?". Remember the answer (`maxRight`) instead of asking again. A number that beats `maxRight` beats everything on its right. The scan finds leaders backwards, so reverse once (no sorting needed: leaders are already in decreasing order).

Shortcut that fails: "just the biggest number and the last one" gives `[10, 1]` for `[10, 2, 8, 3, 1]`; the real answer is `[10, 8, 3, 1]`.

See `Brute/pseudocode.md` and `Optimal/pseudocode.md`. Every program was compiled, run and random-tested against a naive oracle.
