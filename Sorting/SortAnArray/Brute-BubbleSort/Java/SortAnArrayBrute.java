import java.util.*;

public class SortAnArrayBrute {
    public int[] sortArray(int[] nums) {
        int end = nums.length - 1;
        while (end > 0) {
            boolean swapped = false;
            for (int scan = 0; scan < end; scan++) {
                if (nums[scan] > nums[scan + 1]) {
                    int held = nums[scan];
                    nums[scan] = nums[scan + 1];
                    nums[scan + 1] = held;
                    swapped = true;
                }
            }
            if (!swapped) {
                break;
            }
            end--;
        }
        return nums;
    }

    public static void main(String[] args) {
        SortAnArrayBrute solver = new SortAnArrayBrute();
        int[] nums = new int[]{5, 2, 3, 1};
        int[] answer = solver.sortArray(nums);
        System.out.println(Arrays.toString(answer));
    }
}
