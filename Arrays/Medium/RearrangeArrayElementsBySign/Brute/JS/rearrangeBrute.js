function rearrangeBrute(nums) {
    const size = nums.length;
    const positives = [];
    const negatives = [];
    for (let scan = 0; scan < size; scan++) {
        if (nums[scan] > 0) {
            positives.push(nums[scan]);
        } else {
            negatives.push(nums[scan]);
        }
    }
    const result = new Array(size);
    for (let pair = 0; pair < size / 2; pair++) {
        result[2 * pair] = positives[pair];
        result[2 * pair + 1] = negatives[pair];
    }
    return result;
}

const show = (values) => console.log("[" + values.join(", ") + "]");
show(rearrangeBrute([3, 1, -2, -5, 2, -4]));
show(rearrangeBrute([-1, 2, -3, 4]));
show(rearrangeBrute([1, 2, 3, -4, -5, -6]));
