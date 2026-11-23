class Solution {
    public void bubbleSort(int[] nums) {
        // after each pass, the biggest bubble rises to sortedEnd
        for (int sortedEnd = nums.length - 1; sortedEnd > 0; sortedEnd--) {
            boolean swapped = false;
            for (int currBubble = 0; currBubble < sortedEnd; currBubble++) {
                int nextBubble = currBubble + 1;
                if (nums[currBubble] > nums[nextBubble]) {
                    swap(nums, currBubble, nextBubble);
                    swapped = true;
                }
            }
            // a pass with no swaps means the array is already sorted
            if (!swapped) {
                break;
            }
        }
    }

    private void swap(int[] nums, int left, int right) {
        int held = nums[left];
        nums[left] = nums[right];
        nums[right] = held;
    }
}

// Run it locally: javac BubbleSortOptimal.java && java Main
class Main {
    public static void main(String[] args) {
        int[] nums = {7, 2, 8, 1, 5};
        new Solution().bubbleSort(nums);
        System.out.println(java.util.Arrays.toString(nums));
    }
}
