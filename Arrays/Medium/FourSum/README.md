# 4Sum (online-test style)

Video: "4Sum" on LearnWithKiriti (Kodee and Mr. Tock). Arrays series, episode 18. LeetCode 18, Medium.
Taught as an **online coding test**: brute, better and optimal rounds, then the k-Sum follow-up, and each fast answer grows out of the slow one.

Return every quadruplet `[a, b, c, d]` from four different positions of `nums` with `a + b + c + d == target`. Each quadruplet only once, in any order.
```
nums = [1, 0, -1, 0, -2, 2], target = 0   ->   [[-2, -1, 1, 2], [-2, 0, 0, 2], [-1, 0, 0, 1]]
nums = [2, 2, 2, 2, 2],      target = 8   ->   [[2, 2, 2, 2]]
```

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute-EveryQuad/` | `first`, `second`, `third`, `fourth`, each after the one before; a hit is sorted and stored in a set `found`, so a repeat lands on the copy already there | O(n⁴) | the set |
| `Better-HashSet/` | Fix `first` and `second`; the rest is Two Sum: `need = target - nums[first] - nums[second] - nums[third]`, look it up in `seen` (emptied for every pair), then add `nums[third]` | O(n³) | O(n) |
| `Optimal-SortAndTwoPointers/` | Sort; fix `first` and `second`, squeeze `left` and `right`: too small → left up, too big → right down; skip repeated `first`, `second`, `left` and `right` | O(n³) | O(1) |
| `FollowUp-KSum/` | Any k: sort once, `kSum` fixes one number (`pick`) and asks `kSum` for k - 1 numbers after it; at k = 2 it is the squeeze | O(n^(k-1)) | O(k) for the calls |

## Rebuild it
**Fix two. Squeeze the rest. Skip the repeats, mind the overflow.**
- What do I fix? Two cards, `first` and `second`. The rest is the Two Sum II squeeze with target `target - nums[first] - nums[second]`.
- Which four repeats do I skip? `first` equal to the one before; `second` equal to the one before, but **only when `second > first + 1`** (the first `second` after `first` may equal it: `[2, 2, 2, 2]` needs that); after a hit, `left` equal to the one before and `right` equal to the one after.
- Overflow: four numbers near a billion add up to about four billion, more than a Java / C++ `int` can hold, so the sum wraps to a wrong number and a test fails (LeetCode has one: `[1000000000 x4]`, target `-294967296`, answer `[]`). Do the sum in `long` (Java) / `long long` (C++). Four ints always fit in a long. Python integers grow as big as they need; JavaScript numbers are exact up to about 9 quadrillion, so they are safe here.
- When is `long` not enough? When numbers are multiplied, products can pass even a long; then Java's `BigInteger` (Python needs nothing) is the general tool. For sums of a few ints, `long` is enough and much faster.
- Why the squeeze never misses: if the sum is too small, `nums[left]` with ANY card up to `right` is too small, so drop left (mirror for too big).
- k-Sum: 2Sum = squeeze, 3Sum = fix one + squeeze, 4Sum = fix two + squeeze, k-Sum = fix k - 2 + squeeze. Each fixed number costs one more factor of n: O(n^(k-1)). In `kSum`, `pick > start` is the same rule as `second > first + 1`.
- Imports not allowed in your test? Drop `import java.util.*;` and write `java.util.` before `List`, `Set`, `HashSet`, `ArrayList`, `Arrays` and `Collections`.

Practise it on **learnwithkiriti.com** (notes, code in 4 languages, Memory Pairs level 3, a mock interview with Mr. Tock, Shelf Bot animates your own code), or next to the video in the Kodee Practice Chrome extension (link in the video description).

See the `pseudocode.md` in each folder. Every program was compiled, run and tested.
