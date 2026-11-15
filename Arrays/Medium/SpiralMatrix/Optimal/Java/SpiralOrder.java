import java.util.*;

public class SpiralOrder {
    static List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> result = new ArrayList<>();
        int top = 0;
        int bottom = matrix.length - 1;
        int left = 0;
        int right = matrix[0].length - 1;
        while (top <= bottom && left <= right) {
            for (int col = left; col <= right; col++) {
                result.add(matrix[top][col]);
            }
            top++;
            for (int row = top; row <= bottom; row++) {
                result.add(matrix[row][right]);
            }
            right--;
            if (top <= bottom) {
                for (int col = right; col >= left; col--) {
                    result.add(matrix[bottom][col]);
                }
                bottom--;
            }
            if (left <= right) {
                for (int row = bottom; row >= top; row--) {
                    result.add(matrix[row][left]);
                }
                left++;
            }
        }
        return result;
    }

    static String show(Object o) {
        if (o instanceof int[]) return java.util.Arrays.toString((int[]) o);
        if (o instanceof long[]) return java.util.Arrays.toString((long[]) o);
        if (o instanceof boolean[]) return java.util.Arrays.toString((boolean[]) o);
        if (o instanceof Object[]) return java.util.Arrays.deepToString((Object[]) o);
        return String.valueOf(o);
    }

    public static void main(String[] args) {
        System.out.println(show(spiralOrder(new int[][]{{1, 2, 3}, {8, 9, 4}, {7, 6, 5}})));
        System.out.println(show(spiralOrder(new int[][]{{1, 2, 3, 4}, {10, 11, 12, 5}, {9, 8, 7, 6}})));
        System.out.println(show(spiralOrder(new int[][]{{1, 2, 3}})));
        System.out.println(show(spiralOrder(new int[][]{{1}, {2}, {3}})));
    }
}
