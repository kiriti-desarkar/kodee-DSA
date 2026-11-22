def find_union(nums1, nums2):
    seen = set()
    for value in nums1:
        seen.add(value)
    for value in nums2:
        seen.add(value)
    return sorted(seen)


if __name__ == "__main__":
    nums1 = [1, 2, 3, 4, 5]
    nums2 = [1, 2, 3, 6, 7]
    print(find_union(nums1, nums2))
