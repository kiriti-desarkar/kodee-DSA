import json


def setZeroesBetter(matrix):
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
    matrix = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]; setZeroesBetter(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[0, 1, 2, 0], [3, 4, 5, 2], [1, 3, 1, 5]]; setZeroesBetter(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1, 2, 3, 4], [5, 0, 7, 8], [9, 10, 11, 12], [13, 14, 0, 16]]; setZeroesBetter(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1]]; setZeroesBetter(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[0]]; setZeroesBetter(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[-1, 2], [3, 0]]; setZeroesBetter(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1, 2, 3, 4], [5, 0, 7, 8], [0, 10, 11, 12], [13, 14, 15, 0]]; setZeroesBetter(matrix); print(json.dumps(matrix).replace(',', ', '))
