import json


def twoSumBrute(nums, target):
    for first in range(len(nums)):
        for second in range(first + 1, len(nums)):
            if nums[first] + nums[second] == target:
                return [first, second]
    return []


if __name__ == "__main__":
    print(json.dumps(twoSumBrute([2, 7, 11, 15], 9)).replace(',', ', '))
    print(json.dumps(twoSumBrute([3, 2, 4], 6)).replace(',', ', '))
    print(json.dumps(twoSumBrute([3, 3], 6)).replace(',', ', '))
    print(json.dumps(twoSumBrute([11, 15, 2, 7], 9)).replace(',', ', '))
    print(json.dumps(twoSumBrute([11, 4, 15, 9, 2, 13, 7, 6], 9)).replace(',', ', '))
    print(json.dumps(twoSumBrute([-3, 4, 3, 90], 0)).replace(',', ', '))
