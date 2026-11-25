function threeSum(nums) {
    nums.sort((a, b) => a - b);
    const triplets = [];
    for (let first = 0; first < nums.length - 2; first++) {
        // same first number as last time: its triplets are already found
        if (first > 0 && nums[first] === nums[first - 1]) {
            continue;
        }
        let left = first + 1;
        let right = nums.length - 1;
        while (left < right) {
            const sum = nums[first] + nums[left] + nums[right];
            if (sum < 0) {
                left++;
            } else if (sum > 0) {
                right--;
            } else {
                triplets.push([nums[first], nums[left], nums[right]]);
                left++;
                right--;
                // skip repeats so the same triplet is not added twice
                while (left < right && nums[left] === nums[left - 1]) {
                    left++;
                }
                while (left < right && nums[right] === nums[right + 1]) {
                    right--;
                }
            }
        }
    }
    return triplets;
}

// Run it locally: node threeSumOptimal.js
const nums = [-1, 0, 1, 2, -1, -4];
console.log(JSON.stringify(threeSum(nums)));
