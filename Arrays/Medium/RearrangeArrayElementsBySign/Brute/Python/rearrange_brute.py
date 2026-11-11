def rearrange_brute(nums):
    size = len(nums)
    positives = []
    negatives = []
    for scan in range(size):
        if nums[scan] > 0:
            positives.append(nums[scan])
        else:
            negatives.append(nums[scan])
    result = [0] * size
    for pair in range(size // 2):
        result[2 * pair] = positives[pair]
        result[2 * pair + 1] = negatives[pair]
    return result


print(rearrange_brute([3, 1, -2, -5, 2, -4]))
print(rearrange_brute([-1, 2, -3, 4]))
print(rearrange_brute([1, 2, 3, -4, -5, -6]))
