function twoSum(nums, target) {
    const seen = new Map();
    for (let second = 0; second < nums.length; second++) {
        const need = target - nums[second];
        if (seen.has(need)) {
            return [seen.get(need), second];
        }
        seen.set(nums[second], second);
    }
    return [];
}

console.log(JSON.stringify(twoSum([2, 7, 11, 15], 9)).replace(/,/g, ', '));
console.log(JSON.stringify(twoSum([3, 2, 4], 6)).replace(/,/g, ', '));
console.log(JSON.stringify(twoSum([3, 3], 6)).replace(/,/g, ', '));
console.log(JSON.stringify(twoSum([11, 15, 2, 7], 9)).replace(/,/g, ', '));
console.log(JSON.stringify(twoSum([11, 4, 15, 9, 2, 13, 7, 6], 9)).replace(/,/g, ', '));
console.log(JSON.stringify(twoSum([-3, 4, 3, 90], 0)).replace(/,/g, ', '));
