import json


# LeetCode 118, version (b): build every row with the round two formula.
def generate_row(row):
    row_list = [1]
    ans = 1
    for col in range(1, row):
        ans = ans * (row - col) // col
        row_list.append(ans)
    return row_list


def generate_by_row_formula(num_rows):
    triangle = []
    for row in range(1, num_rows + 1):
        triangle.append(generate_row(row))
    return triangle


if __name__ == "__main__":
    print(json.dumps(generate_by_row_formula(5)).replace(',', ', '))
    print(json.dumps(generate_by_row_formula(1)).replace(',', ', '))
    print(json.dumps(generate_by_row_formula(2)).replace(',', ', '))
