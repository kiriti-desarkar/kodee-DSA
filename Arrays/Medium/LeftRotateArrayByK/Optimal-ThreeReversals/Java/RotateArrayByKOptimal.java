import java.util.*;

public class RotateArrayByKOptimal {
    public void leftRotate(int[] nums, int k) {
        int size = nums.length;
        k = k % size;
        if (k == 0) {
            return;
        }
        reverse(nums, 0, k - 1);
        reverse(nums, k, size - 1);
        reverse(nums, 0, size - 1);
    }

    void reverse(int[] nums, int left, int right) {
        while (left < right) {
            int held = nums[left];
            nums[left] = nums[right];
            nums[right] = held;
            left++;
            right--;
        }
    }

    public static void main(String[] args) {
        RotateArrayByKOptimal solver = new RotateArrayByKOptimal();
        int[] nums = new int[]{1, 2, 3, 4, 5, 6, 7};
        int k = 3;
        solver.leftRotate(nums, k);
        System.out.println(Arrays.toString(nums));
    }
}
