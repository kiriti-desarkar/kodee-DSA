import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class GenerateSpiral {
    static int[][] generateSpiral(int size) {
        int[][] matrix = new int[size][size];
        int top = 0;
        int bottom = size - 1;
        int left = 0;
        int right = size - 1;
        int value = 1;
        while (top <= bottom && left <= right) {
            for (int col = left; col <= right; col++) {
                matrix[top][col] = value;
                value++;
            }
            top++;
            for (int row = top; row <= bottom; row++) {
                matrix[row][right] = value;
                value++;
            }
            right--;
            if (top <= bottom) {
                for (int col = right; col >= left; col--) {
                    matrix[bottom][col] = value;
                    value++;
                }
                bottom--;
            }
            if (left <= right) {
                for (int row = bottom; row >= top; row--) {
                    matrix[row][left] = value;
                    value++;
                }
                left++;
            }
        }
        return matrix;
    }

    public static void main(String[] args) {
        System.out.println(Arrays.deepToString(generateSpiral(1)));
        System.out.println(Arrays.deepToString(generateSpiral(3)));
        System.out.println(Arrays.deepToString(generateSpiral(4)));
    }
}
