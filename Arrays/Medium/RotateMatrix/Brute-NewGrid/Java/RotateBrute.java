import java.util.*;

public class RotateBrute {
    static void rotateBrute(int[][] matrix) {
        int size = matrix.length;
        int[][] ans = new int[size][size];
        for (int row = 0; row < size; row++) {
            for (int col = 0; col < size; col++) {
                ans[col][size - 1 - row] = matrix[row][col];
            }
        }
        for (int row = 0; row < size; row++) {
            matrix[row] = ans[row];
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
        { int[][] matrix = new int[][]{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; rotateBrute(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}}; rotateBrute(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1}}; rotateBrute(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1, 2}, {3, 4}}; rotateBrute(matrix); System.out.println(show(matrix)); }
    }
}
