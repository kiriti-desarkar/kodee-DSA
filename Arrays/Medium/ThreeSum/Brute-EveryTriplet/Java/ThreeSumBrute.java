import java.util.*;

class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Set<List<Integer>> found = new HashSet<>();
        for (int first = 0; first < nums.length; first++) {
            for (int second = first + 1; second < nums.length; second++) {
                for (int third = second + 1; third < nums.length; third++) {
                    if (nums[first] + nums[second] + nums[third] == 0) {
                        // sorted, so the same three numbers always look the same
                        List<Integer> triplet = Arrays.asList(nums[first], nums[second], nums[third]);
                        Collections.sort(triplet);
                        found.add(triplet);
                    }
                }
            }
        }
        return new ArrayList<>(found);
    }
}

// Run it locally: javac ThreeSumBrute.java && java Main
class Main {
    public static void main(String[] args) {
        int[] nums = {-1, 0, 1, 2, -1, -4};
        System.out.println(new Solution().threeSum(nums));
    }
}
