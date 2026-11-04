# Brute Force: count every volume

## Idea
Take each volume. Count its copies on the whole shelf. If the count is more than half the shelf, that volume is the answer.

## Pseudocode
```
majorityElement(shelf):
    size = number of books in shelf
    for volume in shelf:
        copies = 0
        for book in shelf:
            if book == volume:
                copies = copies + 1
        if copies > size / 2:
            return volume
```

## Dry run: shelf = [3, 7, 7, 5, 7], size = 5, so we need copies above 2
| volume | copies on the whole shelf | more than 2? |
|---|---|---|
| 3 | 1 | no, keep going |
| 7 | 3 | yes, return 7 |

The final `return -1` in the code is never reached: LeetCode promises a majority.

## Cost
- Time O(n x n): every book scans the whole shelf.
- Extra space O(1).
- On a 100,000-book shelf that is about 10,000,000,000 checks. The inner loop recounts the same volume every time it appears: 7 gets counted three times. The better ways remember instead.
