import java.util.*;

public class SetMatrixZeroesBrute {
    public void setZeroes(int[][] matrix) {
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

    public static void main(String[] args) {
        SetMatrixZeroesBrute solver = new SetMatrixZeroesBrute();
        int[][] matrix = new int[][]{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
        solver.setZeroes(matrix);
        System.out.println(Arrays.deepToString(matrix));
    }
}
