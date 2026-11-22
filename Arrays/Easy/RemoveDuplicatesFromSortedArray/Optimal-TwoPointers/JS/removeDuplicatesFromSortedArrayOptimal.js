function removeDuplicates(nums) {
    let write = 1;
    for (let read = 1; read < nums.length; read++) {
        if (nums[read] !== nums[write - 1]) {
            nums[write] = nums[read];
            write++;
        }
    }
    return write;
}

const nums = [1, 1, 2];
const count = removeDuplicates(nums);
console.log(count, JSON.stringify(nums.slice(0, count)).replace(/,/g, ', '));
