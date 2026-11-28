# R1 Brute: every quad
```
found = empty set
for each first:
    for each second after first:
        for each third after second:
            for each fourth after third:
                sum = the four numbers (in long)
                if sum == target: sort the four, add to found
return everything in found
```
Why each loop starts after the one before: four different positions, and each group of positions is tried once.
Why a set: `[1, 0, -1, 0, -2, 2]` has two 0 cards, and a sorted quad always looks the same, so the set keeps it once.
Overflow: with plain int, `[1000000000 x4]` and target `-294967296` wrongly finds a quad (the sum wraps); in long it is `[]`.
Check on example 1: 6 cards = 6 × 5 × 4 × 3 ÷ 24 = 15 tries, 3 quads.
Complexity: O(n⁴) time, the set for space.
