import java.util.*;

public class SpiralOrderBrute {
    static List<Integer> spiralOrder(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        List<Integer> result = new ArrayList<>();
        boolean[][] visited = new boolean[rows][cols];
        int[] rowStep = {0, 1, 0, -1};
        int[] colStep = {1, 0, -1, 0};
        int row = 0;
        int col = 0;
        int direction = 0;
        for (int step = 0; step < rows * cols; step++) {
            result.add(matrix[row][col]);
            visited[row][col] = true;
            int nextRow = row + rowStep[direction];
            int nextCol = col + colStep[direction];
            boolean rowOutside = nextRow < 0 || nextRow >= rows;
            boolean colOutside = nextCol < 0 || nextCol >= cols;
            if (rowOutside || colOutside || visited[nextRow][nextCol]) {
                direction = (direction + 1) % 4;
                nextRow = row + rowStep[direction];
                nextCol = col + colStep[direction];
            }
            row = nextRow;
            col = nextCol;
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
