function rearrangeUnequal(nums) {
    const positives = [];
    const negatives = [];
    for (let scan = 0; scan < nums.length; scan++) {
        if (nums[scan] >= 0) {
            positives.push(nums[scan]);
        } else {
            negatives.push(nums[scan]);
        }
    }
    const result = [];
    let pair = 0;
    while (pair < positives.length && pair < negatives.length) {
        result.push(positives[pair]);
        result.push(negatives[pair]);
        pair++;
    }
    while (pair < positives.length) {
        result.push(positives[pair]);
        pair++;
    }
    while (pair < negatives.length) {
        result.push(negatives[pair]);
        pair++;
    }
    return result;
}

const show = (values) => console.log("[" + values.join(", ") + "]");
show(rearrangeUnequal([9, 4, -2, -1, 5, 0, -5, -3, 2]));
show(rearrangeUnequal([-5, -2, 5, 2, 4, 7, 1, 8, 0, -8]));
show(rearrangeUnequal([3, -1, 5, 7]));
show(rearrangeUnequal([-4, -2]));
