import json


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
    matrix = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]; setZeroes(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[0, 1, 2, 0], [3, 4, 5, 2], [1, 3, 1, 5]]; setZeroes(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1, 2, 3, 4], [5, 0, 7, 8], [9, 10, 11, 12], [13, 14, 0, 16]]; setZeroes(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1]]; setZeroes(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[0]]; setZeroes(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[-1, 2], [3, 0]]; setZeroes(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1, 2, 3, 4], [5, 0, 7, 8], [0, 10, 11, 12], [13, 14, 15, 0]]; setZeroes(matrix); print(json.dumps(matrix).replace(',', ', '))
