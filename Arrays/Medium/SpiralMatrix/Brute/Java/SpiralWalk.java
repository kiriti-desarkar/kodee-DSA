import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class SpiralWalk {
    static List<Integer> spiralWalk(int[][] matrix) {
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

    public static void main(String[] args) {
        System.out.println(spiralWalk(new int[][]{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}));
        System.out.println(spiralWalk(new int[][]{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}));
        System.out.println(spiralWalk(new int[][]{{1, 2, 3}}));
        System.out.println(spiralWalk(new int[][]{{1}, {2}, {3}}));
    }
}
