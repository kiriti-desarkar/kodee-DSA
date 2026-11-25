import java.util.*;

class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> triplets = new ArrayList<>();
        for (int first = 0; first < nums.length - 2; first++) {
            // same first number as last time: its triplets are already found
            if (first > 0 && nums[first] == nums[first - 1]) {
                continue;
            }
            int left = first + 1;
            int right = nums.length - 1;
            while (left < right) {
                int sum = nums[first] + nums[left] + nums[right];
                if (sum < 0) {
                    left++;
                } else if (sum > 0) {
                    right--;
                } else {
                    triplets.add(Arrays.asList(nums[first], nums[left], nums[right]));
                    left++;
                    right--;
                    // skip repeats so the same triplet is not added twice
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                }
            }
        }
        return triplets;
    }
}

// Run it locally: javac ThreeSumOptimal.java && java Main
class Main {
    public static void main(String[] args) {
        int[] nums = {-1, 0, 1, 2, -1, -4};
        System.out.println(new Solution().threeSum(nums));
    }
}
