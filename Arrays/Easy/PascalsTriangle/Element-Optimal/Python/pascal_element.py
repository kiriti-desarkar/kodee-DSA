import json


def pascal_element(row, col):
    ans = 1
    for i in range(1, col):
        ans = ans * (row - i) // i
    return ans


if __name__ == "__main__":
    print(json.dumps(pascal_element(5, 3)).replace(',', ', '))
    print(json.dumps(pascal_element(1, 1)).replace(',', ', '))
    print(json.dumps(pascal_element(6, 3)).replace(',', ', '))
    print(json.dumps(pascal_element(30, 15)).replace(',', ', '))
    print(json.dumps(pascal_element(31, 16)).replace(',', ', '))
