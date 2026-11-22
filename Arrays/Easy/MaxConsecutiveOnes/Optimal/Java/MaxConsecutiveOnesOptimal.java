import java.util.*;

public class MaxConsecutiveOnesOptimal {
    public int findMaxConsecutiveOnes(int[] nums) {
        int maxCount = 0;
        int current = 0;
        for (int light : nums) {
            if (light == 1) {
                current++;
                if (current > maxCount) {
                    maxCount = current;
                }
            } else {
                current = 0;
            }
        }
        return maxCount;
    }

    public static void main(String[] args) {
        MaxConsecutiveOnesOptimal solver = new MaxConsecutiveOnesOptimal();
        int[] nums = new int[]{1, 1, 0, 1, 1, 1};
        int answer = solver.findMaxConsecutiveOnes(nums);
        System.out.println(answer);
    }
}
