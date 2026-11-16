import json


def generate_row(row):
    row_list = [1]
    ans = 1
    for col in range(1, row):
        ans = ans * (row - col) // col
        row_list.append(ans)
    return row_list


if __name__ == "__main__":
    print(json.dumps(generate_row(5)).replace(',', ', '))
    print(json.dumps(generate_row(1)).replace(',', ', '))
    print(json.dumps(generate_row(2)).replace(',', ', '))
    print(json.dumps(generate_row(7)).replace(',', ', '))
