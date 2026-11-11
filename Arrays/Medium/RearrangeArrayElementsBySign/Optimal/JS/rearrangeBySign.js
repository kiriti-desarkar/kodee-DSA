function rearrangeBySign(nums) {
    const size = nums.length;
    const result = new Array(size);
    let posIndex = 0;
    let negIndex = 1;
    for (let scan = 0; scan < size; scan++) {
        if (nums[scan] > 0) {
            result[posIndex] = nums[scan];
            posIndex += 2;
        } else {
            result[negIndex] = nums[scan];
            negIndex += 2;
        }
    }
    return result;
}

const show = (values) => console.log("[" + values.join(", ") + "]");
show(rearrangeBySign([3, 1, -2, -5, 2, -4]));
show(rearrangeBySign([-1, 2, -3, 4]));
show(rearrangeBySign([1, 2, 3, -4, -5, -6]));
