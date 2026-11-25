import java.util.*;

public class TwoSumBrute {
    static int[] twoSumBrute(int[] nums, int target) {
        for (int first = 0; first < nums.length; first++) {
            for (int second = first + 1; second < nums.length; second++) {
                if (nums[first] + nums[second] == target) {
                    return new int[] {first, second};
                }
            }
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
        System.out.println(show(twoSumBrute(new int[]{2, 7, 11, 15}, 9)));
        System.out.println(show(twoSumBrute(new int[]{3, 2, 4}, 6)));
        System.out.println(show(twoSumBrute(new int[]{3, 3}, 6)));
        System.out.println(show(twoSumBrute(new int[]{11, 15, 2, 7}, 9)));
        System.out.println(show(twoSumBrute(new int[]{11, 4, 15, 9, 2, 13, 7, 6}, 9)));
        System.out.println(show(twoSumBrute(new int[]{-3, 4, 3, 90}, 0)));
    }
}
