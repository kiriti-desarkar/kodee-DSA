import json


def rotate_brute(matrix):
    size = len(matrix)
    ans = [[0] * size for _ in range(size)]
    for row in range(size):
        for col in range(size):
            ans[col][size - 1 - row] = matrix[row][col]
    for row in range(size):
        matrix[row] = ans[row]


if __name__ == "__main__":
    matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]; rotate_brute(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[5, 1, 9, 11], [2, 4, 8, 10], [13, 3, 6, 7], [15, 14, 12, 16]]; rotate_brute(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1]]; rotate_brute(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1, 2], [3, 4]]; rotate_brute(matrix); print(json.dumps(matrix).replace(',', ', '))
