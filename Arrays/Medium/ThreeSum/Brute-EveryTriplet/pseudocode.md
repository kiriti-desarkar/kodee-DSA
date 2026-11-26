# R1 Brute: every triplet
```
found = empty set
for each first from 0:
    for each second after first:
        for each third after second:
            if nums[first] + nums[second] + nums[third] == 0:
                sort the three, add to found
return everything in found
```
Why each loop starts after the one before: no position is used twice, and each group of three positions is tried once.
Why sort before storing: -1, 0, 1 and 0, 1, -1 are the same triplet; sorted, they look the same, so the set keeps one.
Check on the nine cards [2, 4, -4, -3, 6, 0, -3, -3, 4]: 84 tries, 5 hits, 2 kept ([-4, 0, 4] and [-3, -3, 6]); the other 3 hits are repeats the set throws away.
Cost: n × (n − 1) × (n − 2) ÷ 6 tries. 9 cards = 84. O(n³) time, the set is extra space.
