# R3 Optimal: sort, squeeze, skip the repeats
```
sort nums
triplets = empty list
for each first, up to the third from the end:
    same as the one before? skip
    left = first + 1;  right = last
    while left < right:
        sum = nums[first] + nums[left] + nums[right]
        too small: left up;  too big: right down
        zero: add the triplet, left up, right down
            skip equal numbers: left up, right down
return triplets
```
Derivation: the repeats came from equal numbers far apart (three -3s, two 4s). Sort the row and they sit side by side, so a repeat is "same as my neighbour? skip". A sorted row also gives Two Sum II's squeeze, so `seen` goes too.
Why the squeeze never misses: too small means left with every card up to right is too small, so left is useless: drop it. Too big works the other way for right.
Why it is faster: for one first on nine cards, the brute tries 28 pairs of the cards after it; the squeeze drops one card per look, at most 7. Sorting costs n log n once, and we return numbers, not positions, so the new order is fine.
Dry run on the sorted cards [-4, -3, -3, -3, 0, 2, 4, 4, 6]: first -4 squeezes to [-4, 0, 4], then right lands on the other 4: skip. First -3 finds [-3, -3, 6], then left lands on another -3: skip. The next two -3s as first: skip. First 0, 2 and 4 find nothing. Two triplets, 15 looks, no memory, no set.
Bonus (not in the code): once nums[first] > 0, stop early.
Complexity: O(n²) time, O(1) extra space apart from the answer.
