import json


def spiral_order(matrix):
    result = []
    top = 0
    bottom = len(matrix) - 1
    left = 0
    right = len(matrix[0]) - 1
    while top <= bottom and left <= right:
        for col in range(left, right + 1):
            result.append(matrix[top][col])
        top += 1
        for row in range(top, bottom + 1):
            result.append(matrix[row][right])
        right -= 1
        if top <= bottom:
            for col in range(right, left - 1, -1):
                result.append(matrix[bottom][col])
            bottom -= 1
        if left <= right:
            for row in range(bottom, top - 1, -1):
                result.append(matrix[row][left])
            left += 1
    return result


if __name__ == "__main__":
    print(json.dumps(spiral_order([[1, 2, 3], [8, 9, 4], [7, 6, 5]])).replace(',', ', '))
    print(json.dumps(spiral_order([[1, 2, 3, 4], [10, 11, 12, 5], [9, 8, 7, 6]])).replace(',', ', '))
    print(json.dumps(spiral_order([[1, 2, 3]])).replace(',', ', '))
    print(json.dumps(spiral_order([[1], [2], [3]])).replace(',', ', '))
