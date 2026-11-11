function rearrangeInPlace(nums) {
    const size = nums.length;
    for (let seat = 0; seat < size; seat++) {
        const needsPositive = seat % 2 === 0;
        const isPositive = nums[seat] > 0;
        if (needsPositive === isPositive) {
            continue;
        }
        let matchIndex = seat + 1;
        while ((nums[matchIndex] > 0) !== needsPositive) {
            matchIndex++;
        }
        const movedValue = nums[matchIndex];
        for (let shiftIndex = matchIndex; shiftIndex > seat; shiftIndex--) {
            nums[shiftIndex] = nums[shiftIndex - 1];
        }
        nums[seat] = movedValue;
    }
}

const show = (values) => console.log("[" + values.join(", ") + "]");
const nums1 = [3, 1, -2, -5, 2, -4];
rearrangeInPlace(nums1);
show(nums1);
const nums2 = [-1, 2, -3, 4];
rearrangeInPlace(nums2);
show(nums2);
const nums3 = [1, 2, 3, -4, -5, -6];
rearrangeInPlace(nums3);
show(nums3);
