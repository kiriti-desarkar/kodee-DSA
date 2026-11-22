import java.util.*;

public class BinarySearchBrute {
    public int search(int[] nums, int target) {
        for (int scan = 0; scan < nums.length; scan++) {
            if (nums[scan] == target) {
                return scan;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        BinarySearchBrute solver = new BinarySearchBrute();
        int[] nums = new int[]{2, 5, 8, 12, 16, 23, 38, 56};
        int target = 23;
        int answer = solver.search(nums, target);
        System.out.println(answer);
    }
}
