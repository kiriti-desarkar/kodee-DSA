import json


def generate_matrix(size):
    matrix = [[0] * size for row_index in range(size)]
    top = 0
    bottom = size - 1
    left = 0
    right = size - 1
    value = 1
    while top <= bottom and left <= right:
        for col in range(left, right + 1):
            matrix[top][col] = value
            value += 1
        top += 1
        for row in range(top, bottom + 1):
            matrix[row][right] = value
            value += 1
        right -= 1
        if top <= bottom:
            for col in range(right, left - 1, -1):
                matrix[bottom][col] = value
                value += 1
            bottom -= 1
        if left <= right:
            for row in range(bottom, top - 1, -1):
                matrix[row][left] = value
                value += 1
            left += 1
    return matrix


if __name__ == "__main__":
    print(json.dumps(generate_matrix(1)).replace(',', ', '))
    print(json.dumps(generate_matrix(3)).replace(',', ', '))
    print(json.dumps(generate_matrix(4)).replace(',', ', '))
