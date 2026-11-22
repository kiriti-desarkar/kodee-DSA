function insertionSort(nums) {
    const size = nums.length;
    for (let next = 1; next < size; next++) {
        let slot = next;
        while (slot > 0 && nums[slot - 1] > nums[slot]) {
            const held = nums[slot];
            nums[slot] = nums[slot - 1];
            nums[slot - 1] = held;
            slot--;
        }
    }
}

const nums = [7, 2, 8, 1, 5];
insertionSort(nums);
console.log(JSON.stringify(nums).replace(/,/g, ', '));
