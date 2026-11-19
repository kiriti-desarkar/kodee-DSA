import java.util.*;

public class RotateRect {
    static int[][] rotateRect(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        int[][] ans = new int[cols][rows];
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                ans[col][rows - 1 - row] = matrix[row][col];
            }
        }
        return ans;
    }

    static String show(Object o) {
        if (o instanceof int[]) return java.util.Arrays.toString((int[]) o);
        if (o instanceof long[]) return java.util.Arrays.toString((long[]) o);
        if (o instanceof boolean[]) return java.util.Arrays.toString((boolean[]) o);
        if (o instanceof Object[]) return java.util.Arrays.deepToString((Object[]) o);
        return String.valueOf(o);
    }

    public static void main(String[] args) {
        System.out.println(show(rotateRect(new int[][]{{1, 2, 3}, {4, 5, 6}})));
        System.out.println(show(rotateRect(new int[][]{{1}, {2}, {3}})));
        System.out.println(show(rotateRect(new int[][]{{1, 2, 3, 4}})));
        System.out.println(show(rotateRect(new int[][]{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}})));
    }
}
