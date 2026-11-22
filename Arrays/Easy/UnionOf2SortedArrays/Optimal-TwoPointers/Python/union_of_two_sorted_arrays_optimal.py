def find_union(nums1, nums2):
    result = []
    spot_a = 0
    spot_b = 0
    while spot_a < len(nums1) or spot_b < len(nums2):
        if spot_b == len(nums2) or (spot_a < len(nums1) and nums1[spot_a] <= nums2[spot_b]):
            next_value = nums1[spot_a]
            spot_a += 1
        else:
            next_value = nums2[spot_b]
            spot_b += 1
        if not result or result[-1] != next_value:
            result.append(next_value)
    return result


if __name__ == "__main__":
    nums1 = [1, 2, 3, 4, 5]
    nums2 = [1, 2, 3, 6, 7]
    print(find_union(nums1, nums2))
