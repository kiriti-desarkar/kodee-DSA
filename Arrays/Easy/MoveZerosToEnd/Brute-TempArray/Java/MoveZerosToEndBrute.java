import java.util.*;

public class MoveZerosToEndBrute {
    public void moveZeroes(int[] nums) {
        List<Integer> nonZeros = new ArrayList<>();
        for (int value : nums) {
            if (value != 0) {
                nonZeros.add(value);
            }
        }
        for (int spot = 0; spot < nums.length; spot++) {
            nums[spot] = spot < nonZeros.size() ? nonZeros.get(spot) : 0;
        }
    }

    public static void main(String[] args) {
        MoveZerosToEndBrute solver = new MoveZerosToEndBrute();
        int[] nums = new int[]{0, 1, 0, 3, 12};
        solver.moveZeroes(nums);
        System.out.println(Arrays.toString(nums));
    }
}
