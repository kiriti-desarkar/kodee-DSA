# Optimal: one pass, two seat pointers

```
result = new list of size
posIndex = 0
negIndex = 1
for scan from 0 to size - 1:
    if nums[scan] > 0:
        result[posIndex] = nums[scan]
        posIndex += 2
    else:
        result[negIndex] = nums[scan]
        negIndex += 2
return result
```

Derivation: in the brute force, `positives[p]` always lands on seat `2p`. So seat each number directly and skip the lists.

Dry run on `[-1, 2, -3, 4]`:

| scan | value | seat used | posIndex after | negIndex after | result |
|---|---|---|---|---|---|
| 0 | -1 | 1 | 0 | 3 | [_, -1, _, _] |
| 1 | 2 | 0 | 2 | 3 | [2, -1, _, _] |
| 2 | -3 | 3 | 2 | 5 | [2, -1, _, -3] |
| 3 | 4 | 2 | 4 | 5 | [2, -1, 4, -3] |

The main example `[3, 1, -2, -5, 2, -4]` fills seats 0, 2, 1, 3, 4, 5 in scan order, giving `[3, -2, 1, -5, 2, -4]`.

Seat proof:
- Plus numbers use only even seats and minus numbers only odd seats, so two numbers never land on the same seat.
- There are exactly n/2 plus numbers and exactly n/2 even seats (0, 2, ..., n - 2), so every plus number gets a seat and the last one lands on seat n - 2. The same holds for minus numbers and odd seats (the last lands on n - 1). No seat is left empty and nothing runs past the end.
- Scanning left to right hands out each sign's seats in increasing order, so each sign keeps its original order.

Time: O(n), one pass. Extra space: O(1) besides the output.
