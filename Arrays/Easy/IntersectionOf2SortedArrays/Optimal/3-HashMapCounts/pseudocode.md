# Optimal 3: Hash Map Counts (any order)

## Derive it under stress
1. **Is there an order?** No, so Two Pointers and Binary Search are out.
2. **What must I remember about A while I walk B?** How many copies of each value are still unused.
3. **What remembers things by value?** A hash map.

Count the **smaller** array, because memory is the cost.

## Pseudocode
```
intersectCounts(shelfA, shelfB):
    if sizeA <= sizeB:
        smallShelf = shelfA
        bigShelf = shelfB
    else:
        smallShelf = shelfB
        bigShelf = shelfA
    counts = empty map, a missing value counts as 0
    for book in smallShelf:
        counts[book] = counts[book] + 1
    common = empty list
    for book in bigShelf:
        if counts[book] > 0:
            add book to common
            counts[book] = counts[book] - 1
    return common
```
Challenge: write the swap the recursive way (call yourself with the arrays swapped), and share it in the comments.

## Variant: values are only 0 to 1000 (its own method)
```
intersectSmallValues(shelfA, shelfB):     # every value is 0 to 1000
    counts = list of 1001 zeros
    for book in shelfA:
        counts[book] = counts[book] + 1
    common = empty list
    for book in shelfB:
        if counts[book] > 0:
            add book to common
            counts[book] = counts[book] - 1
    return common
```
A plain array replaces the hash map. It has a fixed size of 1001, so the extra space is O(1).

## Why it works (proof)
`counts[v]` = unused copies of `v` on the counted shelf. Each pairing uses one copy. When the count hits 0, further copies of `v` stay behind. So `v` is added exactly `min(countA, countB)` times.

## Dry run: smallShelf = [1, 2, 2, 4], bigShelf = [2, 4, 4, 5]
`counts = {1: 1, 2: 2, 4: 1}`

| book | counts[book] | action | common |
|---|---|---|---|
| 2 | 2 -> 1 | add | [2] |
| 4 | 1 -> 0 | add | [2, 4] |
| 4 | 0 | skip | [2, 4] |
| 5 | missing = 0 | skip | [2, 4] |

The answer follows the walked shelf's order. LeetCode accepts any order.

## Cost
- Time O(n + m).
- Extra space O(min(n, m)) for the map, or O(1) (1001 slots) for the small-values method.
