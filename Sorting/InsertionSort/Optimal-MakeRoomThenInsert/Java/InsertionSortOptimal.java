class Solution {
    public void insertionSort(int[] nums) {
        // everything left of newBookSpot is already sorted
        for (int newBookSpot = 1; newBookSpot < nums.length; newBookSpot++) {
            int newBook = nums[newBookSpot];
            int gap = newBookSpot;
            // shift every bigger book one step right to make room
            while (gap > 0 && nums[gap - 1] > newBook) {
                nums[gap] = nums[gap - 1];
                gap--;
            }
            nums[gap] = newBook;
        }
    }
}

// Run it locally: javac InsertionSortOptimal.java && java Main
class Main {
    public static void main(String[] args) {
        int[] nums = {7, 2, 8, 1, 5};
        new Solution().insertionSort(nums);
        System.out.println(java.util.Arrays.toString(nums));
    }
}
