# Two Sum (online-test style) + Two Sum II

Video: "Two Sum" on LearnWithKiriti (Kodee and Mr. Tock). Arrays series, episode 16. LeetCode 1, Easy, plus LeetCode 167 (Two Sum II, input sorted).
Taught as an **online coding test**: three rounds of 5:00 each (15 minutes), thinking time counts, and the fast answer grows out of the slow one.

Find the positions of two numbers in `nums` that add up to `target`. Exactly one answer; a number can't pair with itself.
```
nums = [2, 7, 11, 15], target = 9   ->   [0, 1]      (2 + 7 = 9)
```

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute-EveryPair/` | `first` from 0, `second` after it, check every pair | O(n²) | O(1) |
| `Optimal-HashMap/` | One pass: `need = target - nums[second]`; if `need` is in `seen` return, else remember `nums[second] -> second` | O(n) | O(n) |
| `Sorted-TwoPointers-LC167/` | Sorted input: `left` at the start, `right` at the end; too small → left up, too big → right down; 1-based answer | O(n) | O(1) |

## Rebuild it
**Ask for the partner. Check, then remember. Sorted? Squeeze both ends.**
- The brute's inner loop only asks one thing: is `target - me` somewhere before me? Remember what you've seen instead of scanning back.
- A hash map lookup opens one drawer: the number picks its own drawer through a tiny formula. Nothing is scanned.
- Check BEFORE you store: with `[3, 3]`, target 6, storing first makes the first 3 find itself.
- Duplicates are harmless: the old position already had its chance before the map overwrote it.
- Sorted: if `nums[left] + nums[right]` is too small, `nums[left]` with ANY partner left is too small, so drop left (mirror for too big). The squeeze never skips the answer.
- Don't sort LeetCode 1: sorting scrambles the positions (and costs n log n). A yes/no "is there a pair?" can sort and squeeze.
- The ladder: 3Sum = fix one number + Two Sum on the rest; 4Sum = fix two + Two Sum.

Practise it on **learnwithkiriti.com** (notes, code in 4 languages, the Memory Pairs game, a mock interview with Mr. Tock, Shelf Bot animates your own code), or next to the video in the Kodee Practice Chrome extension (link in the video description).

See the `pseudocode.md` in each folder. Every program was compiled, run and tested.
