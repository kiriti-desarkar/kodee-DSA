function quickSort(nums) {
    sortRange(nums, 0, nums.length - 1);
}

function sortRange(nums, low, high) {
    if (low >= high) {
        return;
    }
    const pivotSpot = partition(nums, low, high);
    sortRange(nums, low, pivotSpot - 1);
    sortRange(nums, pivotSpot + 1, high);
}

function partition(nums, low, high) {
    const pivot = nums[high];
    let wall = low;
    for (let scan = low; scan < high; scan++) {
        if (nums[scan] <= pivot) {
            const held = nums[wall];
            nums[wall] = nums[scan];
            nums[scan] = held;
            wall++;
        }
    }
    const held = nums[wall];
    nums[wall] = nums[high];
    nums[high] = held;
    return wall;
}

const nums = [7, 2, 8, 1, 5];
quickSort(nums);
console.log(JSON.stringify(nums).replace(/,/g, ', '));
