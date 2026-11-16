import json


# Brute force: n C r with factorials.
# Python integers never overflow, so this stays correct, but the numbers get huge and slow.
def factorial(n):
    result = 1
    for i in range(2, n + 1):
        result = result * i
    return result


def pascal_element_brute(row, col):
    top = factorial(row - 1)
    bottom = factorial(col - 1) * factorial(row - col)
    return top // bottom


if __name__ == "__main__":
    print(json.dumps(pascal_element_brute(5, 3)).replace(',', ', '))
    print(json.dumps(pascal_element_brute(1, 1)).replace(',', ', '))
    print(json.dumps(pascal_element_brute(6, 3)).replace(',', ', '))
    print(json.dumps(pascal_element_brute(21, 11)).replace(',', ', '))
