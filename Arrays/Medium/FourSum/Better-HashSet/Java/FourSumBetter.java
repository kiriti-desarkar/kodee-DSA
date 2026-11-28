import java.util.*;

class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        Set<List<Integer>> found = new HashSet<>();
        for (int first = 0; first < nums.length; first++) {
            for (int second = first + 1; second < nums.length; second++) {
                Set<Long> seen = new HashSet<>();
                for (int third = second + 1; third < nums.length; third++) {
                    // long: the subtraction can go past the int limit (overflow)
                    long need = (long) target - nums[first]
                        - nums[second] - nums[third];
                    if (seen.contains(need)) {
                        List<Integer> quad = Arrays.asList(
                            nums[first], nums[second], nums[third], (int) need);
                        Collections.sort(quad);
                        found.add(quad);
                    }
                    seen.add((long) nums[third]);
                }
            }
        }
        return new ArrayList<>(found);
    }
}

// Run it locally: javac FourSumBetter.java && java Main
class Main {
    public static void main(String[] args) {
        System.out.println(new Solution().fourSum(new int[] {1, 0, -1, 0, -2, 2}, 0));
        System.out.println(new Solution().fourSum(new int[] {2, 2, 2, 2, 2}, 8));
        System.out.println(new Solution().fourSum(new int[] {1000000000, 1000000000, 1000000000, 1000000000}, -294967296));
    }
}
