function findUnion(nums1, nums2) {
    const seen = new Set();
    for (const value of nums1) {
        seen.add(value);
    }
    for (const value of nums2) {
        seen.add(value);
    }
    return [...seen].sort((a, b) => a - b);
}

const nums1 = [1, 2, 3, 4, 5];
const nums2 = [1, 2, 3, 6, 7];
console.log(JSON.stringify(findUnion(nums1, nums2)).replace(/,/g, ', '));
