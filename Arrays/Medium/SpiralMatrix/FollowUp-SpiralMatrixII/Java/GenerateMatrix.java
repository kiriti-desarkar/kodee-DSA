import java.util.*;

public class GenerateMatrix {
    static int[][] generateMatrix(int size) {
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

    static String show(Object o) {
        if (o instanceof int[]) return java.util.Arrays.toString((int[]) o);
        if (o instanceof long[]) return java.util.Arrays.toString((long[]) o);
        if (o instanceof boolean[]) return java.util.Arrays.toString((boolean[]) o);
        if (o instanceof Object[]) return java.util.Arrays.deepToString((Object[]) o);
        return String.valueOf(o);
    }

    public static void main(String[] args) {
        System.out.println(show(generateMatrix(1)));
        System.out.println(show(generateMatrix(3)));
        System.out.println(show(generateMatrix(4)));
    }
}
