function insertionSort(nums) {
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
}

const nums = [7, 2, 8, 1, 5];
insertionSort(nums);
console.log(JSON.stringify(nums).replace(/,/g, ', '));
