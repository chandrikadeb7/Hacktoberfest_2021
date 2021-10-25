import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * Author: Ravel Mello
 * 
 */

public class DiagonalDifference {

    static int diagonalDiff(List<List<Integer>> arr){
        showMultiDimensionalArray(arr);
        int leftD = 0, rightD = 0;
        for(int i = 0, j = arr.get(0).size()-1; i < arr.get(0).size(); i++, j--){
            leftD = leftD + arr.get(i).get(i);
            rightD = rightD + arr.get(i).get(j);
        }
        return Math.abs(leftD - rightD);
    }

    static void showMultiDimensionalArray(List<List<Integer>> arr){
        for(int i = 0; i < arr.get(0).size(); i++){
            for(int j = 0; j < arr.get(0).size(); j++){
                System.out.print("\t" + arr.get(i).get(j) +"\t");
            }
            System.out.print("\n");
        }
    }


    public static void main(String[] args) {
        List<List<Integer>> arr = new ArrayList<>();

        arr.add(new ArrayList<>(Arrays.asList(1,2,3)));
        arr.add(new ArrayList<>(Arrays.asList(4,5,6)));
        arr.add(new ArrayList<>(Arrays.asList(7,8,9)));

        System.out.println("The modulue of all diags is " + diagonalDiff(arr));
    }

}