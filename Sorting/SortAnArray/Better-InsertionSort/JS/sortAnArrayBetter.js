function sortArray(nums) {
    const size = nums.length;
    for (let next = 1; next < size; next++) {
        const held = nums[next];
        let slot = next;
        while (slot > 0 && nums[slot - 1] > held) {
            nums[slot] = nums[slot - 1];
            slot--;
        }
        nums[slot] = held;
    }
    return nums;
}

const nums = [5, 2, 3, 1];
console.log(JSON.stringify(sortArray(nums)).replace(/,/g, ', '));
