import java.util.*;

class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        Arrays.sort(nums);
        List<List<Integer>> quads = new ArrayList<>();
        for (int first = 0; first < nums.length - 3; first++) {
            // same first number as last time: its quads are already found
            if (first > 0 && nums[first] == nums[first - 1]) {
                continue;
            }
            for (int second = first + 1; second < nums.length - 2; second++) {
                // second may equal first once (2, 2, ...); after that an equal second is a repeat
                if (second > first + 1 && nums[second] == nums[second - 1]) {
                    continue;
                }
                int left = second + 1;
                int right = nums.length - 1;
                while (left < right) {
                    // long: four big ints can go past the int limit (overflow)
                    long sum = (long) nums[first] + nums[second]
                        + nums[left] + nums[right];
                    if (sum < target) {
                        left++;
                    } else if (sum > target) {
                        right--;
                    } else {
                        quads.add(Arrays.asList(
                            nums[first], nums[second], nums[left], nums[right]));
                        left++;
                        right--;
                        // skip repeats so the same group is not added twice
                        while (left < right && nums[left] == nums[left - 1]) {
                            left++;
                        }
                        while (left < right && nums[right] == nums[right + 1]) {
                            right--;
                        }
                    }
                }
            }
        }
        return quads;
    }
}

// Run it locally: javac FourSumOptimal.java && java Main
class Main {
    public static void main(String[] args) {
        System.out.println(new Solution().fourSum(new int[] {1, 0, -1, 0, -2, 2}, 0));
        System.out.println(new Solution().fourSum(new int[] {2, 2, 2, 2, 2}, 8));
        System.out.println(new Solution().fourSum(new int[] {1000000000, 1000000000, 1000000000, 1000000000}, -294967296));
    }
}
