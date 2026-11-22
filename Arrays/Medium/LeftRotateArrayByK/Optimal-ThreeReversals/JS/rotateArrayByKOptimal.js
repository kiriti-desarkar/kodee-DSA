function leftRotate(nums, k) {
    const size = nums.length;
    k = k % size;
    if (k === 0) {
        return;
    }
    reverse(nums, 0, k - 1);
    reverse(nums, k, size - 1);
    reverse(nums, 0, size - 1);
}

function reverse(nums, left, right) {
    while (left < right) {
        const held = nums[left];
        nums[left] = nums[right];
        nums[right] = held;
        left++;
        right--;
    }
}

const nums = [1, 2, 3, 4, 5, 6, 7];
const k = 3;
leftRotate(nums, k);
console.log(JSON.stringify(nums).replace(/,/g, ', '));
