function fourSum(nums, target) {
    nums.sort((a, b) => a - b);
    const quads = [];
    for (let first = 0; first < nums.length - 3; first++) {
        // same first number as last time: its quads are already found
        if (first > 0 && nums[first] === nums[first - 1]) {
            continue;
        }
        for (let second = first + 1; second < nums.length - 2; second++) {
            // second may equal first once (2, 2, ...); after that an equal second is a repeat
            if (second > first + 1 && nums[second] === nums[second - 1]) {
                continue;
            }
            let left = second + 1;
            let right = nums.length - 1;
            while (left < right) {
                const sum = nums[first] + nums[second] + nums[left] + nums[right];
                if (sum < target) {
                    left++;
                } else if (sum > target) {
                    right--;
                } else {
                    quads.push([nums[first], nums[second], nums[left], nums[right]]);
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
        }
    }
    return quads;
}

// Run it locally: node fourSumOptimal.js
console.log(JSON.stringify(fourSum([1, 0, -1, 0, -2, 2], 0)));
console.log(JSON.stringify(fourSum([2, 2, 2, 2, 2], 8)));
console.log(JSON.stringify(fourSum([1000000000, 1000000000, 1000000000, 1000000000], -294967296)));
