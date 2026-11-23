class Solution {
    public void selectionSort(int[] nums) {
        // each pass selects the smallest of the rest and puts it at frontSlot
        for (int frontSlot = 0; frontSlot < nums.length - 1; frontSlot++) {
            int smallestSpot = frontSlot;
            for (int candidate = frontSlot + 1; candidate < nums.length; candidate++) {
                if (nums[candidate] < nums[smallestSpot]) {
                    smallestSpot = candidate;
                }
            }
            if (smallestSpot != frontSlot) {
                swap(nums, frontSlot, smallestSpot);
            }
        }
    }

    private void swap(int[] nums, int left, int right) {
        int held = nums[left];
        nums[left] = nums[right];
        nums[right] = held;
    }
}

// Run it locally: javac SelectionSortOptimal.java && java Main
class Main {
    public static void main(String[] args) {
        int[] nums = {7, 2, 8, 1, 5};
        new Solution().selectionSort(nums);
        System.out.println(java.util.Arrays.toString(nums));
    }
}
