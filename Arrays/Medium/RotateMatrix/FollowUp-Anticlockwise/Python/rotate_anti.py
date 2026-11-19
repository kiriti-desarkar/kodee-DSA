import json


def rotate_anti(matrix):
    size = len(matrix)
    for row in range(size):
        for col in range(row + 1, size):
            matrix[row][col], matrix[col][row] = matrix[col][row], matrix[row][col]
    for col in range(size):
        top = 0
        bottom = size - 1
        while top < bottom:
            matrix[top][col], matrix[bottom][col] = matrix[bottom][col], matrix[top][col]
            top += 1
            bottom -= 1


if __name__ == "__main__":
    matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]; rotate_anti(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]; rotate_anti(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1]]; rotate_anti(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1, 2], [3, 4]]; rotate_anti(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1, 2, 3, 4, 5], [6, 7, 8, 9, 10], [11, 12, 13, 14, 15], [16, 17, 18, 19, 20], [21, 22, 23, 24, 25]]; rotate_anti(matrix); print(json.dumps(matrix).replace(',', ', '))
