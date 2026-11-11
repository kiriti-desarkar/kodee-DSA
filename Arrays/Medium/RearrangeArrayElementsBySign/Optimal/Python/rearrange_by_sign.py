def rearrange_by_sign(nums):
    size = len(nums)
    result = [0] * size
    pos_index = 0
    neg_index = 1
    for scan in range(size):
        if nums[scan] > 0:
            result[pos_index] = nums[scan]
            pos_index += 2
        else:
            result[neg_index] = nums[scan]
            neg_index += 2
    return result


print(rearrange_by_sign([3, 1, -2, -5, 2, -4]))
print(rearrange_by_sign([-1, 2, -3, 4]))
print(rearrange_by_sign([1, 2, 3, -4, -5, -6]))
