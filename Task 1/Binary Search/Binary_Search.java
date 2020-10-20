package milestone16Searching;

import java.util.Scanner;

public class BinarySearch {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
         Scanner sc=new Scanner(System.in);
         System.out.println("Enter no. of element in array: ");            //Enter no.of elements in a array
         int x=sc.nextInt();
         int flag=0;
         int arr[]=new int[x];
         System.out.println("Enter elements of array in sorted manner: ");            //Enter array element in sorted manner
         for(int i=0;i<x;i++) {
          arr[i]=sc.nextInt();
         }
         System.out.println("Enter elements to be searched: ");
         int n=sc.nextInt();
         int L=0,H=x-1,M=(L+H)/2;                                        //L=lower limit  H=Higher Limit  M=Middle limit of array
         while(L<=H) {
         if(arr[M]==n) {
        	 System.out.println(n +" is present at index "+M);
        	 flag=1;
        	 break;
        }
         if(arr[M]>n) {
        	    H=M-1;
        	    M=(L+H)/2;
                if(arr[M]==n) {
        	    System.out.println(n +" is present at index "+M);
        	    flag=1;
        	    break;
        	    }
               
         }
         else {
        	 L=M+1;
        	 M=(L+H)/2;
             if(arr[M]==n) {
     	     System.out.println(n +" is present at index "+M);
     	     flag=1;
     	     break;
             }
             
             }
         
         }
         if(flag==0)
        	 System.out.println(n+" is not present in array.");
       
         
	}

}
