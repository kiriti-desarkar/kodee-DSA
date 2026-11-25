import json


def twoSum(nums, target):
    seen = {}
    for second in range(len(nums)):
        need = target - nums[second]
        if need in seen:
            return [seen[need], second]
        seen[nums[second]] = second
    return []


if __name__ == "__main__":
    print(json.dumps(twoSum([2, 7, 11, 15], 9)).replace(',', ', '))
    print(json.dumps(twoSum([3, 2, 4], 6)).replace(',', ', '))
    print(json.dumps(twoSum([3, 3], 6)).replace(',', ', '))
    print(json.dumps(twoSum([11, 15, 2, 7], 9)).replace(',', ', '))
    print(json.dumps(twoSum([11, 4, 15, 9, 2, 13, 7, 6], 9)).replace(',', ', '))
    print(json.dumps(twoSum([-3, 4, 3, 90], 0)).replace(',', ', '))
