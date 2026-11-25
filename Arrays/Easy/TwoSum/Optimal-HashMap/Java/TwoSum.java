import java.util.*;

public class TwoSum {
    static int[] twoSum(int[] nums, int target) {
        java.util.HashMap<Integer, Integer> seen = new java.util.HashMap<>();
        for (int second = 0; second < nums.length; second++) {
            int need = target - nums[second];
            if (seen.containsKey(need)) {
                return new int[] {seen.get(need), second};
            }
            seen.put(nums[second], second);
        }
        return new int[] {};
    }

    static String show(Object o) {
        if (o instanceof int[]) return java.util.Arrays.toString((int[]) o);
        if (o instanceof long[]) return java.util.Arrays.toString((long[]) o);
        if (o instanceof boolean[]) return java.util.Arrays.toString((boolean[]) o);
        if (o instanceof Object[]) return java.util.Arrays.deepToString((Object[]) o);
        return String.valueOf(o);
    }

    public static void main(String[] args) {
        System.out.println(show(twoSum(new int[]{2, 7, 11, 15}, 9)));
        System.out.println(show(twoSum(new int[]{3, 2, 4}, 6)));
        System.out.println(show(twoSum(new int[]{3, 3}, 6)));
        System.out.println(show(twoSum(new int[]{11, 15, 2, 7}, 9)));
        System.out.println(show(twoSum(new int[]{11, 4, 15, 9, 2, 13, 7, 6}, 9)));
        System.out.println(show(twoSum(new int[]{-3, 4, 3, 90}, 0)));
    }
}
