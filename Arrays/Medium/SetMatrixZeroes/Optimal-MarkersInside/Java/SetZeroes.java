import java.util.*;

public class SetZeroes {
    static void setZeroes(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        boolean rowZero = false;
        boolean colZero = false;
        for (int col = 0; col < cols; col++) {
            if (matrix[0][col] == 0) {
                rowZero = true;
            }
        }
        for (int row = 0; row < rows; row++) {
            if (matrix[row][0] == 0) {
                colZero = true;
            }
        }
        for (int row = 1; row < rows; row++) {
            for (int col = 1; col < cols; col++) {
                if (matrix[row][col] == 0) {
                    matrix[row][0] = 0;
                    matrix[0][col] = 0;
                }
            }
        }
        for (int row = 1; row < rows; row++) {
            for (int col = 1; col < cols; col++) {
                if (matrix[row][0] == 0 || matrix[0][col] == 0) {
                    matrix[row][col] = 0;
                }
            }
        }
        if (rowZero) {
            for (int col = 0; col < cols; col++) {
                matrix[0][col] = 0;
            }
        }
        if (colZero) {
            for (int row = 0; row < rows; row++) {
                matrix[row][0] = 0;
            }
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
        { int[][] matrix = new int[][]{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}}; setZeroes(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}}; setZeroes(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1, 2, 3, 4}, {5, 0, 7, 8}, {9, 10, 11, 12}, {13, 14, 0, 16}}; setZeroes(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1}}; setZeroes(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{0}}; setZeroes(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{-1, 2}, {3, 0}}; setZeroes(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1, 2, 3, 4}, {5, 0, 7, 8}, {0, 10, 11, 12}, {13, 14, 15, 0}}; setZeroes(matrix); System.out.println(show(matrix)); }
    }
}
