import java.util.*;

public class MoveZerosToEndOptimal {
    public void moveZeroes(int[] nums) {
        int write = 0;
        for (int read = 0; read < nums.length; read++) {
            if (nums[read] != 0) {
                int held = nums[write];
                nums[write] = nums[read];
                nums[read] = held;
                write++;
            }
        }
    }

    public static void main(String[] args) {
        MoveZerosToEndOptimal solver = new MoveZerosToEndOptimal();
        int[] nums = new int[]{0, 1, 0, 3, 12};
        solver.moveZeroes(nums);
        System.out.println(Arrays.toString(nums));
    }
}
