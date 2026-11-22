function findUnion(nums1, nums2) {
    const result = [];
    let spotA = 0;
    let spotB = 0;
    while (spotA < nums1.length || spotB < nums2.length) {
        let next;
        if (spotB === nums2.length || (spotA < nums1.length && nums1[spotA] <= nums2[spotB])) {
            next = nums1[spotA];
            spotA++;
        } else {
            next = nums2[spotB];
            spotB++;
        }
        if (result.length === 0 || result[result.length - 1] !== next) {
            result.push(next);
        }
    }
    return result;
}

const nums1 = [1, 2, 3, 4, 5];
const nums2 = [1, 2, 3, 6, 7];
console.log(JSON.stringify(findUnion(nums1, nums2)).replace(/,/g, ', '));
