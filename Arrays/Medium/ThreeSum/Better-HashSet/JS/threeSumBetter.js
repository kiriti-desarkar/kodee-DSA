function threeSum(nums) {
    const found = new Map();
    for (let first = 0; first < nums.length; first++) {
        // Two Sum on the numbers after first, with target -nums[first]
        const seen = new Set();
        for (let second = first + 1; second < nums.length; second++) {
            const need = -(nums[first] + nums[second]);
            if (seen.has(need)) {
                const triplet = [nums[first], nums[second], need].sort((a, b) => a - b);
                found.set(triplet.join(','), triplet);
            }
            seen.add(nums[second]);
        }
    }
    return [...found.values()];
}

// Run it locally: node threeSumBetter.js
const nums = [-1, 0, 1, 2, -1, -4];
console.log(JSON.stringify(threeSum(nums)));
