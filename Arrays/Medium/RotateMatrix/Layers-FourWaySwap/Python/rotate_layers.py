import json


def rotate_layers(matrix):
    size = len(matrix)
    for layer in range(size // 2):
        first = layer
        last = size - 1 - layer
        for step in range(last - first):
            top = matrix[first][first + step]
            matrix[first][first + step] = matrix[last - step][first]
            matrix[last - step][first] = matrix[last][last - step]
            matrix[last][last - step] = matrix[first + step][last]
            matrix[first + step][last] = top


if __name__ == "__main__":
    matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]; rotate_layers(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[5, 1, 9, 11], [2, 4, 8, 10], [13, 3, 6, 7], [15, 14, 12, 16]]; rotate_layers(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1]]; rotate_layers(matrix); print(json.dumps(matrix).replace(',', ', '))
    matrix = [[1, 2, 3, 4, 5], [6, 7, 8, 9, 10], [11, 12, 13, 14, 15], [16, 17, 18, 19, 20], [21, 22, 23, 24, 25]]; rotate_layers(matrix); print(json.dumps(matrix).replace(',', ', '))
