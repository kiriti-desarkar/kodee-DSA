def setZeroes(matrix):
    rows = len(matrix)
    cols = len(matrix[0])
    rowMark = [False] * rows
    colMark = [False] * cols
    for row in range(rows):
        for col in range(cols):
            if matrix[row][col] == 0:
                rowMark[row] = True
                colMark[col] = True
    for row in range(rows):
        for col in range(cols):
            if rowMark[row] or colMark[col]:
                matrix[row][col] = 0


if __name__ == "__main__":
    matrix = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]
    setZeroes(matrix)
    print(matrix)
