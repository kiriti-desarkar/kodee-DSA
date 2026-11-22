def sort_array(nums):
    end = len(nums) - 1
    while end > 0:
        swapped = False
        for scan in range(end):
            if nums[scan] > nums[scan + 1]:
                nums[scan], nums[scan + 1] = nums[scan + 1], nums[scan]
                swapped = True
        if not swapped:
            break
        end -= 1
    return nums


if __name__ == "__main__":
    nums = [5, 2, 3, 1]
    print(sort_array(nums))
