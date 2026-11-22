def missing_number(nums):
    total = len(nums) + 1
    expected = total * (total + 1) // 2
    actual = sum(nums)
    return expected - actual


if __name__ == "__main__":
    nums = [1, 2, 4, 5]
    print(missing_number(nums))
