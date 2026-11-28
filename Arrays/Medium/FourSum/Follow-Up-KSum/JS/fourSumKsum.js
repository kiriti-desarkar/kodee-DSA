function fourSum(nums, target) {
    nums.sort((a, b) => a - b);
    return kSum(nums, target, 0, 4);
}

function kSum(nums, target, start, k) {
    const groups = [];
    // two numbers left: the Two Sum II squeeze
    if (k === 2) {
        let left = start;
        let right = nums.length - 1;
        while (left < right) {
            const sum = nums[left] + nums[right];
            if (sum < target) {
                left++;
            } else if (sum > target) {
                right--;
            } else {
                groups.push([nums[left], nums[right]]);
                left++;
                right--;
                // skip repeats so the same group is not added twice
                while (left < right && nums[left] === nums[left - 1]) {
                    left++;
                }
                while (left < right && nums[right] === nums[right + 1]) {
                    right--;
                }
            }
        }
        return groups;
    }
    for (let pick = start; pick < nums.length - k + 1; pick++) {
        // same rule as second > first + 1: the first pick may equal the number before it
        if (pick > start && nums[pick] === nums[pick - 1]) {
            continue;
        }
        for (const rest of kSum(nums, target - nums[pick], pick + 1, k - 1)) {
            groups.push([nums[pick], ...rest]);
        }
    }
    return groups;
}

// Run it locally: node fourSumKsum.js
console.log(JSON.stringify(fourSum([1, 0, -1, 0, -2, 2], 0)));
console.log(JSON.stringify(fourSum([2, 2, 2, 2, 2], 8)));
console.log(JSON.stringify(fourSum([1000000000, 1000000000, 1000000000, 1000000000], -294967296)));
