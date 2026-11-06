import java.util.Arrays;

public class MergeSort {
    static void merge(int[] nums, int low, int mid, int high) {
        int[] temp = new int[high - low + 1];
        int left = low;
        int right = mid + 1;
        int spot = 0;
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp[spot] = nums[left];
                left++;
            } else {
                temp[spot] = nums[right];
                right++;
            }
            spot++;
        }
        while (left <= mid) {
            temp[spot] = nums[left];
            left++;
            spot++;
        }
        while (right <= high) {
            temp[spot] = nums[right];
            right++;
            spot++;
        }
        for (spot = 0; spot < temp.length; spot++) {
            nums[low + spot] = temp[spot];
        }
    }
    
    static void mergeSort(int[] nums, int low, int high) {
        if (low >= high) {
            return;
        }
        int mid = low + (high - low) / 2;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid + 1, high);
        merge(nums, low, mid, high);
    }

    public static void main(String[] args) {
        int[] nums = {5, 2, 8, 1};
        mergeSort(nums, 0, nums.length - 1);
        System.out.println(Arrays.toString(nums)); // [1, 2, 5, 8]
    }
}
