import java.util.*;

public class RotateArrayByKBrute {
    public void leftRotate(int[] nums, int k) {
        int size = nums.length;
        int rounds = k % size;
        for (int round = 0; round < rounds; round++) {
            int first = nums[0];
            for (int scan = 1; scan < size; scan++) {
                nums[scan - 1] = nums[scan];
            }
            nums[size - 1] = first;
        }
    }

    public static void main(String[] args) {
        RotateArrayByKBrute solver = new RotateArrayByKBrute();
        int[] nums = new int[]{1, 2, 3, 4, 5, 6, 7};
        int k = 3;
        solver.leftRotate(nums, k);
        System.out.println(Arrays.toString(nums));
    }
}
