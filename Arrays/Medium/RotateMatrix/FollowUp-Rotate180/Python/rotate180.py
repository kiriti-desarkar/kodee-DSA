import json


def rotate180(matrix):
    size = len(matrix)
    for row in range(size):
        left = 0
        right = size - 1
        while left < right:
            matrix[row][left], matrix[row][right] = matrix[row][right], matrix[row][left]
            left += 1
            right -= 1
    top = 0
    bottom = size - 1
    while top < bottom:
        matrix[top], matrix[bottom] = matrix[bottom], matrix[top]
        top += 1
        bottom -= 1


if __name__ == "__main__":
    matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]; rotate180(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]; rotate180(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1]]; rotate180(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1, 2], [3, 4]]; rotate180(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1, 2, 3, 4, 5], [6, 7, 8, 9, 10], [11, 12, 13, 14, 15], [16, 17, 18, 19, 20], [21, 22, 23, 24, 25]]; rotate180(matrix); print(json.dumps(matrix).replace(',', ', '))
