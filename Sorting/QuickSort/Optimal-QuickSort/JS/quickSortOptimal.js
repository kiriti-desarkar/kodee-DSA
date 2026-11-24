function quickSort(nums) {
    quickSortHelper(nums, 0, nums.length - 1);
}

function quickSortHelper(nums, low, high) {
    // one number is already sorted
    if (low >= high) {
        return;
    }
    const pivotSpot = partition(nums, low, high);
    quickSortHelper(nums, low, pivotSpot - 1);
    quickSortHelper(nums, pivotSpot + 1, high);
}

function partition(nums, low, high) {
    const pivot = nums[high];
    // everything left of wall is <= pivot
    let wall = low;
    for (let scan = low; scan < high; scan++) {
        if (nums[scan] <= pivot) {
            [nums[wall], nums[scan]] = [nums[scan], nums[wall]];
            wall++;
        }
    }
    [nums[wall], nums[high]] = [nums[high], nums[wall]];
    return wall;
}

// Run it locally: node quickSortOptimal.js
const nums = [7, 2, 8, 1, 5];
quickSort(nums);
console.log(nums);
