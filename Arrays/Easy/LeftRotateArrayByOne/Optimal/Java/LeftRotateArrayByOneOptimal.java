import java.util.*;

public class LeftRotateArrayByOneOptimal {
    public void rotateByOne(int[] nums) {
        int first = nums[0];
        for (int scan = 1; scan < nums.length; scan++) {
            nums[scan - 1] = nums[scan];
        }
        nums[nums.length - 1] = first;
    }

    public static void main(String[] args) {
        LeftRotateArrayByOneOptimal solver = new LeftRotateArrayByOneOptimal();
        int[] nums = new int[]{1, 2, 3, 4, 5};
        solver.rotateByOne(nums);
        System.out.println(Arrays.toString(nums));
    }
}
