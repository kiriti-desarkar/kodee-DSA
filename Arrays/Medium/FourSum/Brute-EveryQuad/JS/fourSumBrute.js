function fourSum(nums, target) {
    const found = new Map();
    for (let first = 0; first < nums.length; first++) {
        for (let second = first + 1; second < nums.length; second++) {
            for (let third = second + 1; third < nums.length; third++) {
                for (let fourth = third + 1; fourth < nums.length; fourth++) {
                    const sum = nums[first] + nums[second] + nums[third] + nums[fourth];
                    if (sum === target) {
                        const quad = [nums[first], nums[second], nums[third], nums[fourth]];
                        // sorted, so the same four numbers always look the same
                        quad.sort((a, b) => a - b);
                        found.set(quad.join(","), quad);
                    }
                }
            }
        }
    }
    return [...found.values()];
}

// Run it locally: node fourSumBrute.js
console.log(JSON.stringify(fourSum([1, 0, -1, 0, -2, 2], 0)));
console.log(JSON.stringify(fourSum([2, 2, 2, 2, 2], 8)));
console.log(JSON.stringify(fourSum([1000000000, 1000000000, 1000000000, 1000000000], -294967296)));
