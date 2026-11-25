# Brute: try every triplet

```
found = empty set
for first = 0 to n-1:
    for second = first+1 to n-1:
        for third = second+1 to n-1:
            if nums[first] + nums[second] + nums[third] == 0:
                found.add( sorted(nums[first], nums[second], nums[third]) )
return found as a list
```
Why sort the triplet: in [-1, 0, 1, 2, -1, -4], positions (0, 1, 2) give -1, 0, 1 and positions (1, 2, 4) give 0, 1, -1. Same three numbers, different order. Sorted, both become [-1, 0, 1], so the set keeps one.
Cost with 20 numbers: 20·19·18 / 6 = 1140 triplets to try.
Complexity: O(n³) time (plus a tiny sort of 3 numbers), extra space for the set of triplets.
