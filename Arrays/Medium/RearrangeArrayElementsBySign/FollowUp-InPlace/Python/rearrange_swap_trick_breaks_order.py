# WARNING: the swap trick BREAKS ORDER. Signs alternate, but same-sign numbers can change order. Shown only as a counter-example; the order-keeping shift version (rearrangeInPlace) in this folder is the correct in-place answer.
def rearrange_swap_trick(nums):
    # Pseudocode and trace only (not typed on screen). Signs alternate, but the order can break.
    size = len(nums)
    even_seat = 0
    odd_seat = 1
    while even_seat < size and odd_seat < size:
        if nums[even_seat] > 0:
            even_seat += 2
        elif nums[odd_seat] < 0:
            odd_seat += 2
        else:
            nums[even_seat], nums[odd_seat] = nums[odd_seat], nums[even_seat]
            even_seat += 2
            odd_seat += 2


nums1 = [3, 1, -2, -5, 2, -4]
rearrange_swap_trick(nums1)
print(nums1)
nums2 = [1, 2, 3, -4, -5, -6]
rearrange_swap_trick(nums2)
print(nums2)
