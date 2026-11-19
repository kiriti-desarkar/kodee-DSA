import java.util.*;

public class RotateLayers {
    static void rotateLayers(int[][] matrix) {
        int size = matrix.length;
        for (int layer = 0; layer < size / 2; layer++) {
            int first = layer;
            int last = size - 1 - layer;
            for (int step = 0; step < last - first; step++) {
                int top = matrix[first][first + step];
                matrix[first][first + step] = matrix[last - step][first];
                matrix[last - step][first] = matrix[last][last - step];
                matrix[last][last - step] = matrix[first + step][last];
                matrix[first + step][last] = top;
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
        { int[][] matrix = new int[][]{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; rotateLayers(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}}; rotateLayers(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1}}; rotateLayers(matrix); System.out.println(show(matrix)); }
        { int[][] matrix = new int[][]{{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}}; rotateLayers(matrix); System.out.println(show(matrix)); }
    }
}
