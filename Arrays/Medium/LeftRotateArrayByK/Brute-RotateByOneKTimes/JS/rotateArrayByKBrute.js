function leftRotate(nums, k) {
    const size = nums.length;
    const rounds = k % size;
    for (let round = 0; round < rounds; round++) {
        const first = nums[0];
        for (let scan = 1; scan < size; scan++) {
            nums[scan - 1] = nums[scan];
        }
        nums[size - 1] = first;
    }
}

const nums = [1, 2, 3, 4, 5, 6, 7];
const k = 3;
leftRotate(nums, k);
console.log(JSON.stringify(nums).replace(/,/g, ', '));
