import java.util.*;

public class RotateAnti {
    static void rotateAnti(int[][] matrix) {
        int size = matrix.length;
        for (int row = 0; row < size; row++) {
            for (int col = row + 1; col < size; col++) {
                int temp = matrix[row][col];
                matrix[row][col] = matrix[col][row];
                matrix[col][row] = temp;
            }
        }
        for (int col = 0; col < size; col++) {
            int top = 0;
            int bottom = size - 1;
            while (top < bottom) {
                int temp = matrix[top][col];
                matrix[top][col] = matrix[bottom][col];
                matrix[bottom][col] = temp;
                top++;
                bottom--;
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
        { int[][] matrix = new int[][]{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; rotateAnti(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}}; rotateAnti(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1}}; rotateAnti(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1, 2}, {3, 4}}; rotateAnti(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}}; rotateAnti(matrix); System.out.println(show(matrix)); }
    }
}
