import json


def generate(num_rows):
    triangle = []
    for row in range(num_rows):
        row_list = []
        for col in range(row + 1):
            if col == 0 or col == row:
                row_list.append(1)
            else:
                prev = triangle[row - 1]
                row_list.append(prev[col - 1] + prev[col])
        triangle.append(row_list)
    return triangle


if __name__ == "__main__":
    print(json.dumps(generate(5)).replace(',', ', '))
    print(json.dumps(generate(1)).replace(',', ', '))
    print(json.dumps(generate(2)).replace(',', ', '))
