# Left Rotate Array by k Places

Video: "Rotate Array by k: why 3 reversals work" on LearnWithKiriti (Kodee).

Left rotate an array by k places, in place (GeeksforGeeks "rotate by d places"; LeetCode 189 is the same idea rotating right).
Example: `[1, 2, 3, 4, 5, 6, 7]`, k = 3 -> `[4, 5, 6, 7, 1, 2, 3]`

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute-RotateByOneKTimes/` | Brute force: Rotate by one, k times (k % size times, since rotating size times changes nothing). | O(n · k) | O(1) |
| `Optimal-ThreeReversals/` | Optimal: Three reversals: reverse the first k, reverse the rest, reverse everything. Two blocks swap places and each keeps its order. | O(n) | O(1) |

## Rebuild it
**A left rotation swaps two blocks: A = the first k, B = the rest.** Reversing a sequence swaps its blocks but flips each one, and a reversal undoes itself. So reverse A, reverse B, then reverse everything: B A, each block in its original order. First `k = k % size`: rotating by size changes nothing.

See each folder's `pseudocode.md`. Every program runs Example 1 and prints the answer; the same code is in the practice panel's Start menu on learnwithkiriti.com, where Shelf Bot can act it out.
