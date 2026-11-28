import java.util.*;

class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        Set<List<Integer>> found = new HashSet<>();
        for (int first = 0; first < nums.length; first++) {
            for (int second = first + 1; second < nums.length; second++) {
                for (int third = second + 1; third < nums.length; third++) {
                    for (int fourth = third + 1; fourth < nums.length; fourth++) {
                        // long: four big ints can go past the int limit (overflow)
                        long sum = (long) nums[first] + nums[second]
                            + nums[third] + nums[fourth];
                        if (sum == target) {
                            List<Integer> quad = Arrays.asList(
                                nums[first], nums[second], nums[third], nums[fourth]);
                            Collections.sort(quad);
                            found.add(quad);
                        }
                    }
                }
            }
        }
        return new ArrayList<>(found);
    }
}

// Run it locally: javac FourSumBrute.java && java Main
class Main {
    public static void main(String[] args) {
        System.out.println(new Solution().fourSum(new int[] {1, 0, -1, 0, -2, 2}, 0));
        System.out.println(new Solution().fourSum(new int[] {2, 2, 2, 2, 2}, 8));
        System.out.println(new Solution().fourSum(new int[] {1000000000, 1000000000, 1000000000, 1000000000}, -294967296));
    }
}
