function removeDuplicates(nums) {
    const unique = [...new Set(nums)];
    for (let write = 0; write < unique.length; write++) {
        nums[write] = unique[write];
    }
    return unique.length;
}

const nums = [1, 1, 2];
const count = removeDuplicates(nums);
console.log(count, JSON.stringify(nums.slice(0, count)).replace(/,/g, ', '));
