import java.util.Arrays;

public class InsertionSort {
    static void insertionSort(int[] nums) {
        for (int pick = 1; pick < nums.length; pick++) {
            int value = nums[pick];
            int scan = pick - 1;
            while (scan >= 0 && nums[scan] > value) {
                nums[scan + 1] = nums[scan];
                scan--;
            }
            nums[scan + 1] = value;
        }
    }

    public static void main(String[] args) {
        int[] nums = {5, 2, 8, 1};
        insertionSort(nums);
        System.out.println(Arrays.toString(nums)); // [1, 2, 5, 8]
    }
}
