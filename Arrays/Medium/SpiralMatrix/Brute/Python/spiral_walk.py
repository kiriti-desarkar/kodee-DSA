def spiral_walk(matrix):
    rows = len(matrix)
    cols = len(matrix[0])
    result = []
    visited = [[False] * cols for row_index in range(rows)]
    row_step = [0, 1, 0, -1]
    col_step = [1, 0, -1, 0]
    row = 0
    col = 0
    direction = 0
    for step in range(rows * cols):
        result.append(matrix[row][col])
        visited[row][col] = True
        next_row = row + row_step[direction]
        next_col = col + col_step[direction]
        row_outside = next_row < 0 or next_row >= rows
        col_outside = next_col < 0 or next_col >= cols
        if row_outside or col_outside or visited[next_row][next_col]:
            direction = (direction + 1) % 4
            next_row = row + row_step[direction]
            next_col = col + col_step[direction]
        row = next_row
        col = next_col
    return result


if __name__ == "__main__":
    print(spiral_walk([[1, 2, 3], [4, 5, 6], [7, 8, 9]]))
    print(spiral_walk([[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]]))
    print(spiral_walk([[1, 2, 3]]))
    print(spiral_walk([[1], [2], [3]]))
