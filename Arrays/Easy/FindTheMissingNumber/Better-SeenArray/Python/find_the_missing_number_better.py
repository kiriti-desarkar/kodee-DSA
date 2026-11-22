def missing_number(nums):
    total = len(nums) + 1
    seen = [False] * (total + 1)
    for value in nums:
        seen[value] = True
    for wanted in range(1, total + 1):
        if not seen[wanted]:
            return wanted
    return -1


if __name__ == "__main__":
    nums = [1, 2, 4, 5]
    print(missing_number(nums))
