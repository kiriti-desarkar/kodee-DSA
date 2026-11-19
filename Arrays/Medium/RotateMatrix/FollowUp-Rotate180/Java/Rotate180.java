import java.util.*;

public class Rotate180 {
    static void rotate180(int[][] matrix) {
        int size = matrix.length;
        for (int row = 0; row < size; row++) {
            int left = 0;
            int right = size - 1;
            while (left < right) {
                int temp = matrix[row][left];
                matrix[row][left] = matrix[row][right];
                matrix[row][right] = temp;
                left++;
                right--;
            }
        }
        int top = 0;
        int bottom = size - 1;
        while (top < bottom) {
            int[] temp = matrix[top];
            matrix[top] = matrix[bottom];
            matrix[bottom] = temp;
            top++;
            bottom--;
        }
    }

    static String show(Object o) {
        if (o instanceof int[]) return java.util.Arrays.toString((int[]) o);
        if (o instanceof long[]) return java.util.Arrays.toString((long[]) o);
        if (o instanceof boolean[]) return java.util.Arrays.toString((boolean[]) o);
        if (o instanceof Object[]) return java.util.Arrays.deepToString((Object[]) o);
        return String.valueOf(o);
    }

    public static void main(String[] args) {
        { int[][] matrix = new int[][]{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; rotate180(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}}; rotate180(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1}}; rotate180(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1, 2}, {3, 4}}; rotate180(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}}; rotate180(matrix); System.out.println(show(matrix)); }
    }
}
