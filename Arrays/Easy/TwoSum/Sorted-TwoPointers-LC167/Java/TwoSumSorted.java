import java.util.*;

public class TwoSumSorted {
    static int[] twoSumSorted(int[] nums, int target) {
        int left = 0;
        int right = nums.length - 1;
        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) {
                return new int[] {left + 1, right + 1};
            }
            if (sum < target) {
                left++;
            } else {
                right--;
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
        System.out.println(show(twoSumSorted(new int[]{2, 7, 11, 15}, 9)));
        System.out.println(show(twoSumSorted(new int[]{2, 3, 4}, 6)));
        System.out.println(show(twoSumSorted(new int[]{-1, 0}, -1)));
        System.out.println(show(twoSumSorted(new int[]{2, 3, 6, 9}, 9)));
        System.out.println(show(twoSumSorted(new int[]{1, 2, 4, 5, 10, 13, 14, 16}, 9)));
    }
}
