import java.util.*;

public class SetZeroesBrute {
    static void setZeroesBrute(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        int[][] copy = new int[rows][cols];
        for (int row = 0; row < rows; row++) {
            copy[row] = matrix[row].clone();
        }
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                if (copy[row][col] == 0) {
                    for (int across = 0; across < cols; across++) {
                        matrix[row][across] = 0;
                    }
                    for (int down = 0; down < rows; down++) {
                        matrix[down][col] = 0;
                    }
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
        { int[][] matrix = new int[][]{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}}; setZeroesBrute(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}}; setZeroesBrute(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1, 2, 3, 4}, {5, 0, 7, 8}, {9, 10, 11, 12}, {13, 14, 0, 16}}; setZeroesBrute(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1}}; setZeroesBrute(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{0}}; setZeroesBrute(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{-1, 2}, {3, 0}}; setZeroesBrute(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1, 2, 3, 4}, {5, 0, 7, 8}, {0, 10, 11, 12}, {13, 14, 15, 0}}; setZeroesBrute(matrix); System.out.println(show(matrix)); }
    }
}
