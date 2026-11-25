# 3Sum

Video: "3Sum" on LearnWithKiriti (Kodee and Mr. Tock). Arrays series, the episode after Two Sum. LeetCode [15](https://leetcode.com/problems/3sum/), Medium.

Return every triplet of numbers (at three different positions) that adds up to 0, with no triplet listed twice.
```
nums = [-1, 0, 1, 2, -1, -4]   ->   [[-1, -1, 2], [-1, 0, 1]]
```

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute-EveryTriplet/` | `first`, `second` after it, `third` after that; sort every triplet that adds to 0 and keep it in a set | O(n³) | the set of triplets |
| `Better-HashSet/` | Fix `first`, then Two Sum on the rest: `need = -(nums[first] + nums[second])`; check `seen`, then remember `nums[second]` | O(n²) | O(n) for `seen` + the set |
| `Optimal-SortAndTwoPointers/` | Sort, fix `first`, squeeze `left` and `right` like Two Sum II; skip repeated values instead of using a set | O(n²) | O(1) besides sorting and the answer |

## Rebuild it
**Fix one, Two Sum the rest. Sorted? Squeeze, and skip repeats.**
- 3Sum is Two Sum in disguise: once `first` is fixed, you need two numbers that add to `-nums[first]`.
- Repeats are the real problem: in `[-1, 0, 1, 2, -1, -4]` the triplet `-1, 0, 1` appears twice (with either -1). Sorting each triplet makes copies look the same, so a set can drop them.
- The better approach still pays for a set of triplets and an O(n) `seen`. Sorting the array once removes both: equal numbers sit side by side, so you skip a repeat by comparing with the neighbour.
- Sorting costs O(n log n), which is smaller than the O(n²) search, so it is free here (in Two Sum it was not: there the answer was positions, and sorting scrambles them).
- The squeeze never skips a triplet, for the same reason as Two Sum II: if the sum is too small, `nums[left]` with any `right` still in range is too small, so drop `left` (mirror for too big).
- Bonus: once `nums[first] > 0` after sorting, every sum is positive, so you can stop.
- The ladder: 4Sum = fix two numbers, then the same squeeze.

Practise it on **learnwithkiriti.com** (notes, code in 4 languages, the Memory Pairs game, Shelf Bot animates your own code), or next to the video in the Kodee Practice Chrome extension.

See the `pseudocode.md` in each folder. Every program was compiled, run and tested (17 tests per language, including repeats, all zeros and no answer).
