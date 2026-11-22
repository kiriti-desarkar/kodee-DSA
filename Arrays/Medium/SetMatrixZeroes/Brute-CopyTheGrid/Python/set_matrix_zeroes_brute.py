def setZeroes(matrix):
    rows = len(matrix)
    cols = len(matrix[0])
    copy = [line[:] for line in matrix]
    for row in range(rows):
        for col in range(cols):
            if copy[row][col] == 0:
                for across in range(cols):
                    matrix[row][across] = 0
                for down in range(rows):
                    matrix[down][col] = 0


if __name__ == "__main__":
    matrix = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]
    setZeroes(matrix)
    print(matrix)
