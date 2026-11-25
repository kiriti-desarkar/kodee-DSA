function threeSum(nums) {
    const found = new Map();
    for (let first = 0; first < nums.length; first++) {
        for (let second = first + 1; second < nums.length; second++) {
            for (let third = second + 1; third < nums.length; third++) {
                if (nums[first] + nums[second] + nums[third] === 0) {
                    // sorted, so the same three numbers always look the same
                    const triplet = [nums[first], nums[second], nums[third]].sort((a, b) => a - b);
                    found.set(triplet.join(','), triplet);
                }
            }
        }
    }
    return [...found.values()];
}

// Run it locally: node threeSumBrute.js
const nums = [-1, 0, 1, 2, -1, -4];
console.log(JSON.stringify(threeSum(nums)));
