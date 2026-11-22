import java.util.*;

public class SetZeroesBetter {
    static void setZeroesBetter(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        boolean[] rowMark = new boolean[rows];
        boolean[] colMark = new boolean[cols];
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                if (matrix[row][col] == 0) {
                    rowMark[row] = true;
                    colMark[col] = true;
                }
            }
        }
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                if (rowMark[row] || colMark[col]) {
                    matrix[row][col] = 0;
                }
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
        { int[][] matrix = new int[][]{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}}; setZeroesBetter(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}}; setZeroesBetter(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1, 2, 3, 4}, {5, 0, 7, 8}, {9, 10, 11, 12}, {13, 14, 0, 16}}; setZeroesBetter(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1}}; setZeroesBetter(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{0}}; setZeroesBetter(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{-1, 2}, {3, 0}}; setZeroesBetter(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1, 2, 3, 4}, {5, 0, 7, 8}, {0, 10, 11, 12}, {13, 14, 15, 0}}; setZeroesBetter(matrix); System.out.println(show(matrix)); }
    }
}
