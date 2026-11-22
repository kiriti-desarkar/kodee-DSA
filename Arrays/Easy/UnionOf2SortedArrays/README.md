# Union of Two Sorted Arrays

Video: "Union of Two Sorted Arrays: brute force to two pointers" on LearnWithKiriti (Kodee).

Return every distinct value that appears in either of two sorted arrays, in increasing order.
Example: `[1, 2, 3, 4, 5]` and `[1, 2, 3, 6, 7]` -> `[1, 2, 3, 4, 5, 6, 7]`

| Folder | Approach | Time | Extra space |
|---|---|---|---|
| `Brute-SortedSet/` | Brute force: Put everything in a sorted set; it drops duplicates and sorts. | O((n+m) log(n+m)) | O(n + m) |
| `Optimal-TwoPointers/` | Optimal: Two pointers: take the smaller value, skip it if it equals the last one taken. | O(n + m) | O(1) |

## Rebuild it
**Merge like merge sort, but skip repeats.** `spotA` and `spotB` walk the two arrays; take the smaller front value, and append it only if it differs from the last value in `result`.

See each folder's `pseudocode.md`. Every program runs Example 1 and prints the answer; the same code is in the practice panel's Start menu on learnwithkiriti.com, where Shelf Bot can act it out.
