import java.util.*;
public class Matrix {
    public static void main(String...args){
        //BinarySearch bs = new BinarySearch();
        Scanner scan = new Scanner(System.in); // created a scanner clsss object to take dimension(in case we need to genralize the solution)
        int column=3,row=4; // at this satge, i've pre initialized the row, column values we may take input 
        int[][] matrix = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
        int status=0;
        System.out.println("Enter the element to be searched");
        int key = scan.nextInt(); // element to be searched
        if(key>matrix[row-1][column-1]) {
            System.out.println("false");
            System.exit(0);
        }
        int factor = key/column;
       for(int i=0;i<row;i++){
            if(factor==i+1){
                int element = matrix[i][column-1];
                if(key<=element){
                    status = BinarySearch.bs(matrix[i],key);
                    
                    
                }
                else{
                    BinarySearch.bs(matrix[i+1],key);
                    break;
                }
            }
            
            //System.out.println(matrix[1]);
             
        }
        if(status==1) System.out.println("true");
        else System.out.println("false");
       
    }
}
