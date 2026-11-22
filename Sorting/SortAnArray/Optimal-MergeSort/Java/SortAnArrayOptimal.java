import java.util.*;

public class SortAnArrayOptimal {
    public int[] sortArray(int[] nums) {
        sortRange(nums, 0, nums.length - 1);
        return nums;
    }

    void sortRange(int[] nums, int low, int high) {
        if (low >= high) {
            return;
        }
        int mid = low + (high - low) / 2;
        sortRange(nums, low, mid);
        sortRange(nums, mid + 1, high);
        merge(nums, low, mid, high);
    }

    void merge(int[] nums, int low, int mid, int high) {
        int[] merged = new int[high - low + 1];
        int leftSpot = low;
        int rightSpot = mid + 1;
        int write = 0;
        while (leftSpot <= mid && rightSpot <= high) {
            if (nums[leftSpot] <= nums[rightSpot]) {
                merged[write] = nums[leftSpot];
                leftSpot++;
            } else {
                merged[write] = nums[rightSpot];
                rightSpot++;
            }
            write++;
        }
        while (leftSpot <= mid) {
            merged[write] = nums[leftSpot];
            leftSpot++;
            write++;
        }
        while (rightSpot <= high) {
            merged[write] = nums[rightSpot];
            rightSpot++;
            write++;
        }
        for (int copy = 0; copy < merged.length; copy++) {
            nums[low + copy] = merged[copy];
        }
    }

    public static void main(String[] args) {
        SortAnArrayOptimal solver = new SortAnArrayOptimal();
        int[] nums = new int[]{5, 2, 3, 1};
        int[] answer = solver.sortArray(nums);
        System.out.println(Arrays.toString(answer));
    }
}
