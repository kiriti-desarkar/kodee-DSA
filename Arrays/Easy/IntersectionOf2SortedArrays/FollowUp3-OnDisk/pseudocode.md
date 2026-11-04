# Follow-up 3: the big array lives on disk, memory is small

## Idea
Keep the counts of the SMALL array in memory. Read the big array one chunk at a time, check each book against the counts, then throw the chunk away.

## Pseudocode
```
intersectOnDisk(smallShelf, bigShelfChunks):
    counts = counts of smallShelf        # fits in memory
    common = empty list
    for chunk in bigShelfChunks:         # a real program reads each chunk from a file
        for book in chunk:
            if counts[book] > 0:
                add book to common
                counts[book] = counts[book] - 1
    return common
```
In this code, `bigShelfChunks` is a list of small lists that stands in for the file. A real program would read each chunk from the file.

## Dry run: smallShelf = [4, 2, 1, 2], chunks [5, 2] then [4, 4] (nothing is sorted)
`counts = {4: 1, 2: 2, 1: 1}`

| chunk | book | counts[book] | action | common |
|---|---|---|---|---|
| [5, 2] | 5 | missing | skip | [] |
| [5, 2] | 2 | 2 -> 1 | add | [2] |
| [4, 4] | 4 | 1 -> 0 | add | [2, 4] |
| [4, 4] | 4 | 0 | skip | [2, 4] |

The order never mattered: counts don't care where a book sits. Two Pointers would have to sort first.

## If BOTH are too big for memory (pseudocode only)
```
externalSort(shelfA)                 # sort pieces, write them out, merge them
externalSort(shelfB)
run Two Pointers, streaming both     # only the two front books in memory
```
**External sort:** sort pieces that fit in memory, write each one back to disk, then merge them. Two Pointers then needs only the two front books in memory.

## Cost
- Time O(n + m).
- Extra space: O(small) for the counts, plus one chunk.
