import java.util.Scanner;
public class ZeroMatrix {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int m = scanner.nextInt();
        int n = scanner.nextInt();
        int[][] matrix = new int[m][n];
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                matrix[i][j] = scanner.nextInt();
            }
        }
        setZeroes(matrix);
        scanner.close();
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
               System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }
    public static void setZeroes(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        boolean rowHasZero = false;
        boolean colHasZero = false;
        // mark first row and first column as rowSet and columnSet.
        // if 0th row has a zero or 0th col has a zero update the value of boolean
        // variables.
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    if (i == 0)
                        rowHasZero = true;
                    if (j == 0)
                        colHasZero = true;
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        // Update the matrix
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        // if oth row has zero
        if (rowHasZero) {
            for (int j = 0; j < cols; j++) {
                matrix[0][j] = 0;
            }
        }
        // if 0th col has zero
        if (colHasZero) {
            for (int i = 0; i < rows; i++) {
                matrix[i][0] = 0;
            }
        }
    }
}

/**
 * Time Complexity: O(m*n) 
 * Space Complexity: O(1)
 */
