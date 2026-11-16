# R3 the other way: build every row with the row formula
```
for row from 1 to numRows:
    triangle.add(generateRow(row))           (R2's formula for each row)
return triangle
```
Dry run numRows 3: generateRow(1) = [1], generateRow(2) = [1, 1], generateRow(3) = [1, 2, 1].
Complexity: O(n^2) time, the same as adding the two above. It needs a `long` for the middle steps (see Row-Optimal), which is why the video types the "add the two above" version.
