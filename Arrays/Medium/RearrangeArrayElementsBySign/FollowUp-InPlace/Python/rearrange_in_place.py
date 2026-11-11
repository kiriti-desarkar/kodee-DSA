def rearrange_in_place(nums):
    size = len(nums)
    for seat in range(size):
        needs_positive = seat % 2 == 0
        is_positive = nums[seat] > 0
        if needs_positive == is_positive:
            continue
        match_index = seat + 1
        while (nums[match_index] > 0) != needs_positive:
            match_index += 1
        moved_value = nums[match_index]
        for shift_index in range(match_index, seat, -1):
            nums[shift_index] = nums[shift_index - 1]
        nums[seat] = moved_value


nums1 = [3, 1, -2, -5, 2, -4]
rearrange_in_place(nums1)
print(nums1)
nums2 = [-1, 2, -3, 4]
rearrange_in_place(nums2)
print(nums2)
nums3 = [1, 2, 3, -4, -5, -6]
rearrange_in_place(nums3)
print(nums3)
