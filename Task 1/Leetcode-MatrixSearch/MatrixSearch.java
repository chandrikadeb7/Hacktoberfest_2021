/**
 * Question: https://leetcode.com/problems/search-a-2d-matrix/
 * Time Complexity: O(log(matrix.length*matrix[0].length))
 * Space Complexity: O(1)
 * Date: 30th October, 2020
 */
class MatrixSeach {
    public static boolean searchMatrix(int[][] matrix, int target) {
        //If either of row or column is zero, we can simply return false.
        if (matrix.length == 0 || matrix[0].length == 0){
            return false;
        }
        //We define the low and the high simply as 0 and the number of elements in matrix-1
        int low = 0;
        int high = (matrix.length * matrix[0].length)-1;
        //We go on till low <= high and changing the value of row and column by 
        //comparing it with the target
        while(low <= high) {
            int mid = low + (high-low)/2;
            /**
             * We obtain the row by simply dividing mid by numRows and col by a modulo operation over mid.
             * 
             * Example:
                1 2 3 4
                5 6 7 8
                mid = 6, implies 7th(0-based indexing) value
                hence row = 6/(number of elements in row) = 6/4 = 1(integer truncated)
                hence col = 6%(number of elements in row) = 6%4 = 2 (modulo)
                Hence, matrix[1][2] is the 6th(0-based indexing) value and it is 7
             */
            int row = (mid/matrix[0].length);
            int col = (mid%matrix[0].length);
            if(matrix[row][col] == target)
                return true;
            else if(matrix[row][col] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return false;
    }
    public static void main(String[] args) {
        //TestCase 1 - returns true
        int matrix1[][] = {
            {1,3,5,7},
            {10,11,16,20},
            {23,30,34,60}
        };
        int target1 = 3;
        boolean ans1 = searchMatrix(matrix1,target1);
        //TestCase 2 - returns false
        int matrix2[][] = {
            {1,3,5,7},
            {10,11,16,20},
            {23,30,34,60}
        };
        int target2  = 13;
        boolean ans2 = searchMatrix(matrix2,target2);
        //TestCase 3 - Edge Case - returns false
        int matrix3[][]  = {{}};
        int target3 = 0;
        boolean ans3 = searchMatrix(matrix3,target3);
        //TestCase 4 - Edge Case - returns false
        int matrix4[][] = {};
        int target4 = 0;
        boolean ans4 = searchMatrix(matrix4,target4);
        if (ans1 && !ans2 && !ans3 && !ans4)
            System.out.println("All Test Cases Passed");
        else
            System.out.println("Some Test Cases Failed");
    }
}
