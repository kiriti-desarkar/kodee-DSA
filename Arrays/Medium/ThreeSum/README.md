# 3Sum (online-test style)

Video: "3Sum" on LearnWithKiriti (Kodee and Mr. Tock). Arrays series, episode 17. LeetCode 15, Medium.
Taught as an **online coding test**: three rounds, 5:00 on the clock while typing each (15 minutes), and the fast answer grows out of the slow one.

Return every triplet `[a, b, c]` from three different positions of `nums` with `a + b + c == 0`. Each triplet only once, in any order.
```
nums = [-1, 0, 1, 2, -1, -4]           ->   [[-1, -1, 2], [-1, 0, 1]]
nums = [2, 4, -4, -3, 6, 0, -3, -3, 4] ->   [[-4, 0, 4], [-3, -3, 6]]   (the video's nine cards)
```

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute-EveryTriplet/` | `first`, `second` after it, `third` after that; a hit is sorted and stored in a set `found`, so a repeat lands on the copy already there | O(n³) | the set |
| `Better-HashSet/` | Fix `first`; the rest is Two Sum: `need = -(nums[first] + nums[second])`, look it up in `seen` (emptied for every first), then add `nums[second]` | O(n²) | O(n) |
| `Optimal-SortAndTwoPointers/` | Sort; for each `first` squeeze `left` and `right`: too small → left up, too big → right down; skip repeated `first`, `left` and `right` | O(n²) | O(1) |

## Rebuild it
**Fix one. Two Sum the rest. Sort, squeeze, skip the repeats.**
- What do I fix? One card, `first`. The rest is Two Sum with target `-nums[first]`.
- Why a set in rounds 1 and 2? A triplet is sorted before it is stored, so the same three numbers always look the same; the set's hash code + equals keep it once (Java `HashSet` of `List`, Python `set` of tuples, C++ `set` of vectors, JavaScript `Map` keyed by the joined text).
- What does sorting buy me? Two things: the squeeze, so no memory, and equal numbers side by side, so no set.
- Why the squeeze never misses: if `nums[first] + nums[left] + nums[right]` is too small, `nums[left]` with ANY card up to `right` is too small, so drop left (mirror for too big). For one first on nine cards, that is at most 7 looks instead of 28 pairs.
- Which three repeats do I skip? `first` equal to the one before; after a hit, `left` equal to the one before and `right` equal to the one after. Each is one while loop (or a `continue`).
- Bonus (not in the code): once `nums[first] > 0`, three numbers that big can't make zero, so you could stop early.
- Imports not allowed in your test? Drop `import java.util.*;` and write `java.util.` before `List`, `Set`, `HashSet`, `ArrayList`, `Arrays` and `Collections`.
- The ladder: 2Sum finds a pair, 3Sum = fix one + Two Sum, 4Sum = fix two + Two Sum.

Practise it on **learnwithkiriti.com** (notes, code in 4 languages, Memory Pairs level 2, a mock interview with Mr. Tock, Shelf Bot animates your own code), or next to the video in the Kodee Practice Chrome extension (link in the video description).

See the `pseudocode.md` in each folder. Every program was compiled, run and tested.
