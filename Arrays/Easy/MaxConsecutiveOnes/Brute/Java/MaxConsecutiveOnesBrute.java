import java.util.*;

public class MaxConsecutiveOnesBrute {
    public int findMaxConsecutiveOnes(int[] nums) {
        int maxCount = 0;
        for (int start = 0; start < nums.length; start++) {
            int count = 0;
            int scan = start;
            while (scan < nums.length && nums[scan] == 1) {
                count++;
                scan++;
            }
            maxCount = Math.max(maxCount, count);
        }
        return maxCount;
    }

    public static void main(String[] args) {
        MaxConsecutiveOnesBrute solver = new MaxConsecutiveOnesBrute();
        int[] nums = new int[]{1, 1, 0, 1, 1, 1};
        int answer = solver.findMaxConsecutiveOnes(nums);
        System.out.println(answer);
    }
}
