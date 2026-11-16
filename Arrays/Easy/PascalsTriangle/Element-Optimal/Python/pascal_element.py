import json


def pascal_element(row, col):
    ans = 1
    for step in range(1, col):
        ans = ans * (row - step) // step
    return ans


if __name__ == "__main__":
    print(json.dumps(pascal_element(5, 3)).replace(',', ', '))
    print(json.dumps(pascal_element(1, 1)).replace(',', ', '))
    print(json.dumps(pascal_element(6, 3)).replace(',', ', '))
    print(json.dumps(pascal_element(30, 15)).replace(',', ', '))
    print(json.dumps(pascal_element(31, 16)).replace(',', ', '))
