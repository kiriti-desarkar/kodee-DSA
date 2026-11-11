// WARNING: the swap trick BREAKS ORDER. Signs alternate, but same-sign numbers can change order. Shown only as a counter-example; the order-keeping shift version (rearrangeInPlace) in this folder is the correct in-place answer.
function rearrangeSwapTrick(nums) {
    const size = nums.length;
    let evenSeat = 0;
    let oddSeat = 1;
    while (evenSeat < size && oddSeat < size) {
        if (nums[evenSeat] > 0) {
            evenSeat += 2;
        } else if (nums[oddSeat] < 0) {
            oddSeat += 2;
        } else {
            const held = nums[evenSeat];
            nums[evenSeat] = nums[oddSeat];
            nums[oddSeat] = held;
            evenSeat += 2;
            oddSeat += 2;
        }
    }
}

const show = (values) => console.log("[" + values.join(", ") + "]");
const nums1 = [3, 1, -2, -5, 2, -4];
rearrangeSwapTrick(nums1);
show(nums1);
const nums2 = [1, 2, 3, -4, -5, -6];
rearrangeSwapTrick(nums2);
show(nums2);
