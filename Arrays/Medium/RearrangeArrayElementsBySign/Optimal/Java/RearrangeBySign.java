import java.util.Arrays;

public class RearrangeBySign {
    static int[] rearrangeBySign(int[] nums) {
        int size = nums.length;
        int[] result = new int[size];
        int posIndex = 0;
        int negIndex = 1;
        for (int scan = 0; scan < size; scan++) {
            if (nums[scan] > 0) {
                result[posIndex] = nums[scan];
                posIndex += 2;
            } else {
                result[negIndex] = nums[scan];
                negIndex += 2;
            }
        }
        return result;
    }

    public static void main(String[] args) {
        System.out.println(Arrays.toString(rearrangeBySign(new int[]{3, 1, -2, -5, 2, -4})));
        System.out.println(Arrays.toString(rearrangeBySign(new int[]{-1, 2, -3, 4})));
        System.out.println(Arrays.toString(rearrangeBySign(new int[]{1, 2, 3, -4, -5, -6})));
    }
}
