def majority_element(shelf):
    size = len(shelf)
    answer = 0
    for bit in range(32):
        ones = 0
        for volume in shelf:
            if ((volume >> bit) & 1) == 1:
                ones += 1
        if ones > size // 2:
            answer = answer | (1 << bit)
    if answer >= 2 ** 31:
        answer = answer - 2 ** 32
    return answer


shelf = [3, 7, 7, 5, 7]
print("Majority:", majority_element(shelf))
