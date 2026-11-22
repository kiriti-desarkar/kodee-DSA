function moveZeroes(nums) {
    let write = 0;
    for (let read = 0; read < nums.length; read++) {
        if (nums[read] !== 0) {
            const held = nums[write];
            nums[write] = nums[read];
            nums[read] = held;
            write++;
        }
    }
}

const nums = [0, 1, 0, 3, 12];
moveZeroes(nums);
console.log(JSON.stringify(nums).replace(/,/g, ', '));
