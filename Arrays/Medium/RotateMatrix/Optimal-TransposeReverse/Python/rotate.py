import json


def rotate(matrix):
    size = len(matrix)
    for row in range(size):
        for col in range(row + 1, size):
            matrix[row][col], matrix[col][row] = matrix[col][row], matrix[row][col]
    for row in range(size):
        left = 0
        right = size - 1
        while left < right:
            matrix[row][left], matrix[row][right] = matrix[row][right], matrix[row][left]
            left += 1
            right -= 1


if __name__ == "__main__":
    matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]; rotate(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[5, 1, 9, 11], [2, 4, 8, 10], [13, 3, 6, 7], [15, 14, 12, 16]]; rotate(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1]]; rotate(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1, 2], [3, 4]]; rotate(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1, 2, 3, 4, 5], [6, 7, 8, 9, 10], [11, 12, 13, 14, 15], [16, 17, 18, 19, 20], [21, 22, 23, 24, 25]]; rotate(matrix); print(json.dumps(matrix).replace(',', ', '))
