import json


def twoSumSorted(nums, target):
    left = 0
    right = len(nums) - 1
    while left < right:
        sum = nums[left] + nums[right]
        if sum == target:
            return [left + 1, right + 1]
        if sum < target:
            left += 1
        else:
            right -= 1
    return []


if __name__ == "__main__":
    print(json.dumps(twoSumSorted([2, 7, 11, 15], 9)).replace(',', ', '))
    print(json.dumps(twoSumSorted([2, 3, 4], 6)).replace(',', ', '))
    print(json.dumps(twoSumSorted([-1, 0], -1)).replace(',', ', '))
    print(json.dumps(twoSumSorted([2, 3, 6, 9], 9)).replace(',', ', '))
    print(json.dumps(twoSumSorted([1, 2, 4, 5, 10, 13, 14, 16], 9)).replace(',', ', '))
