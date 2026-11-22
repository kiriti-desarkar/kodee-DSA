import json


def setZeroesBrute(matrix):
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
    matrix = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]; setZeroesBrute(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[0, 1, 2, 0], [3, 4, 5, 2], [1, 3, 1, 5]]; setZeroesBrute(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1, 2, 3, 4], [5, 0, 7, 8], [9, 10, 11, 12], [13, 14, 0, 16]]; setZeroesBrute(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1]]; setZeroesBrute(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[0]]; setZeroesBrute(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[-1, 2], [3, 0]]; setZeroesBrute(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1, 2, 3, 4], [5, 0, 7, 8], [0, 10, 11, 12], [13, 14, 15, 0]]; setZeroesBrute(matrix); print(json.dumps(matrix).replace(',', ', '))
