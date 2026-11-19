import json


def rotate_rect(matrix):
    rows = len(matrix)
    cols = len(matrix[0])
    ans = [[0] * rows for _ in range(cols)]
    for row in range(rows):
        for col in range(cols):
            ans[col][rows - 1 - row] = matrix[row][col]
    return ans


if __name__ == "__main__":
    print(json.dumps(rotate_rect([[1, 2, 3], [4, 5, 6]])).replace(',', ', '))
    print(json.dumps(rotate_rect([[1], [2], [3]])).replace(',', ', '))
    print(json.dumps(rotate_rect([[1, 2, 3, 4]])).replace(',', ', '))
    print(json.dumps(rotate_rect([[1, 2, 3], [4, 5, 6], [7, 8, 9]])).replace(',', ', '))
