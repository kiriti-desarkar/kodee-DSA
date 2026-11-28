# R3 Optimal: sort, fix two, squeeze, skip the repeats
```
sort nums
quads = empty list
for each first, up to the fourth from the end:
    same as the one before? skip
    for each second after first, up to the third from the end:
        second > first + 1 and same as the one before? skip
        left = second + 1;  right = last
        while left < right:
            sum = the four numbers (in long)
            too small: left up;  too big: right down
            equal: add the quad, left up, right down
                skip equal numbers: left up, right down
return quads
```
Derivation: the set exists only to throw repeats away, and `seen` costs memory. Sort the row: repeats sit side by side (skip "same as my neighbour"), and the squeeze from Two Sum II needs no memory.
Why `second > first + 1`: the first `second` right after `first` may hold the same number (`[2, 2, 2, 2]` needs two 2s). Only a LATER equal second is a repeat.
Dry run on example 1, sorted `[-2, -1, 0, 0, 1, 2]`, target 0: first -2 finds `[-2, -1, 1, 2]` and `[-2, 0, 0, 2]`, then the second 0 as second: skip. First -1 finds `[-1, 0, 0, 1]`, second 0 again: skip. 7 looks, 3 quads.
Example 2, `[2, 2, 2, 2, 2]`, target 8: one look finds `[2, 2, 2, 2]`; the next second (a 2, not first + 1) skips; the next first (a 2) skips.
Complexity: O(n³) time, O(1) extra space apart from the answer.
