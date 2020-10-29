import java.util.*;
import java.io.*;
public class Main {
  public static void main(String args[]) throws IOException {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt(); //for testcase
    while(t-->0){
      int n = sc.nextInt();
      int arr[] = new int[n];
      for(int i = 0 ; i < n ; i++)
        arr[i] = sc.nextInt();
      int max_from_right = arr[n-1];
      System.out.println(max_from_right+" ");
      for(int i = n-2;i>=0;i--)
        if(arr[i] >= max_from_right) { //to check to find out all the elements that are greater than or equal to all the elements to it's right side.
          max_from_right = arr[i];
          System.out.println(max_from_right + " ");
        }
    }
  }
}

