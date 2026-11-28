function fourSum(nums, target) {
    const found = new Map();
    for (let first = 0; first < nums.length; first++) {
        for (let second = first + 1; second < nums.length; second++) {
            // fresh for every (first, second): only cards after second
            const seen = new Set();
            for (let third = second + 1; third < nums.length; third++) {
                const need = target - nums[first] - nums[second] - nums[third];
                if (seen.has(need)) {
                    const quad = [nums[first], nums[second], nums[third], need];
                    // sorted, so the same four numbers always look the same
                    quad.sort((a, b) => a - b);
                    found.set(quad.join(","), quad);
                }
                seen.add(nums[third]);
            }
        }
    }
    return [...found.values()];
}

// Run it locally: node fourSumBetter.js
console.log(JSON.stringify(fourSum([1, 0, -1, 0, -2, 2], 0)));
console.log(JSON.stringify(fourSum([2, 2, 2, 2, 2], 8)));
console.log(JSON.stringify(fourSum([1000000000, 1000000000, 1000000000, 1000000000], -294967296)));
