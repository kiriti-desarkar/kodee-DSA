import java.util.*;

public class LeftRotateArrayByOneBrute {
    public void rotateByOne(int[] nums) {
        int size = nums.length;
        int[] moved = new int[size];
        for (int scan = 1; scan < size; scan++) {
            moved[scan - 1] = nums[scan];
        }
        moved[size - 1] = nums[0];
        for (int scan = 0; scan < size; scan++) {
            nums[scan] = moved[scan];
        }
    }

    public static void main(String[] args) {
        LeftRotateArrayByOneBrute solver = new LeftRotateArrayByOneBrute();
        int[] nums = new int[]{1, 2, 3, 4, 5};
        solver.rotateByOne(nums);
        System.out.println(Arrays.toString(nums));
    }
}
