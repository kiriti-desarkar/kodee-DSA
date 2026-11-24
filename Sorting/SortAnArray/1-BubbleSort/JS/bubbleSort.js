function sortArray(nums) {
    // after each pass, the biggest bubble rises to sortedEnd
    for (let sortedEnd = nums.length - 1; sortedEnd > 0; sortedEnd--) {
        let swapped = false;
        for (let currBubble = 0; currBubble < sortedEnd; currBubble++) {
            const nextBubble = currBubble + 1;
            if (nums[currBubble] > nums[nextBubble]) {
                [nums[currBubble], nums[nextBubble]] = [nums[nextBubble], nums[currBubble]];
                swapped = true;
            }
        }
        // a pass with no swaps means the array is already sorted
        if (!swapped) {
            break;
        }
    }
    return nums;
}

// Run it locally: node bubbleSort.js
console.log(sortArray([5, 2, 3, 1]));
