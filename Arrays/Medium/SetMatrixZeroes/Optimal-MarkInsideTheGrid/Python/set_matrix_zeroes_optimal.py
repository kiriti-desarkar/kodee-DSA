def setZeroes(matrix):
    rows = len(matrix)
    cols = len(matrix[0])
    rowZero = False
    colZero = False
    for col in range(cols):
        if matrix[0][col] == 0:
            rowZero = True
    for row in range(rows):
        if matrix[row][0] == 0:
            colZero = True
    for row in range(1, rows):
        for col in range(1, cols):
            if matrix[row][col] == 0:
                matrix[row][0] = 0
                matrix[0][col] = 0
    for row in range(1, rows):
        for col in range(1, cols):
            if matrix[row][0] == 0 or matrix[0][col] == 0:
                matrix[row][col] = 0
    if rowZero:
        for col in range(cols):
            matrix[0][col] = 0
    if colZero:
        for row in range(rows):
            matrix[row][0] = 0


if __name__ == "__main__":
    matrix = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]
    setZeroes(matrix)
    print(matrix)
