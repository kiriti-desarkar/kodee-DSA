def rearrange_unequal(nums):
    positives = []
    negatives = []
    for scan in range(len(nums)):
        if nums[scan] >= 0:
            positives.append(nums[scan])
        else:
            negatives.append(nums[scan])
    result = []
    pair = 0
    while pair < len(positives) and pair < len(negatives):
        result.append(positives[pair])
        result.append(negatives[pair])
        pair += 1
    while pair < len(positives):
        result.append(positives[pair])
        pair += 1
    while pair < len(negatives):
        result.append(negatives[pair])
        pair += 1
    return result


print(rearrange_unequal([9, 4, -2, -1, 5, 0, -5, -3, 2]))
print(rearrange_unequal([-5, -2, 5, 2, 4, 7, 1, 8, 0, -8]))
print(rearrange_unequal([3, -1, 5, 7]))
print(rearrange_unequal([-4, -2]))
