def missing_number(nums):
    total = len(nums) + 1
    for wanted in range(1, total + 1):
        found = False
        for value in nums:
            if value == wanted:
                found = True
                break
        if not found:
            return wanted
    return -1


if __name__ == "__main__":
    nums = [1, 2, 4, 5]
    print(missing_number(nums))
