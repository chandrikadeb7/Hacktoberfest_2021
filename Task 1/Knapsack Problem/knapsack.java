import java.util.*;
/*
sangram desai
0/1 knapSack Problem using Dynamic programming
*/
class KnapSack{
  public static void printarray(int arr[][]) {
    System.out.println();
    for(int i=0;i<arr.length;i++) {
      for(int j=0;j<arr[i].length;j++) {
        System.out.print(arr[i][j]+" ");
      }
      System.out.println("");
    }
  }
  public static int[][] knapSack(int W, int value[],int weight[],int n)
  {
   int i, w;
   int Knap[][]=new int[n+1][W+1];
   for (i=0;i<=n;i++)
   {
       for (w=0;w<=W;w++)
       {
           if (i==0||w==0) {
               Knap[i][w]=0;
           }
           else if (weight[i-1]<= w) {
                 Knap[i][w]=Math.max(value[i-1]+Knap[i-1][w-weight[i-1]],Knap[i-1][w]);
           }
           else {
                 Knap[i][w] = Knap[i-1][w];
           }
       }
   }
 
   return Knap;
}

public static void Bactrack(int W, int value[],int weight[], int n, int knap[][]) {
  int i=n,j=W;
  System.out.print("\nValues included are : ");
  while(true) {
    if(knap[i][j]==0) {
      break;
    }
    else if(knap[i][j]==knap[i-1][j]) {
      i--;
    }
    else {
      System.out.print(value[i-1]+" ");
      j-=weight[i-1];
      i--;
    }
  }
System.out.println("\n\nTotal Profit is : "+knap[n][W]);
  
}

  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter total items and the capacity");
    int n=sc.nextInt(),W=sc.nextInt();
    int value[]=new int[n];
    int weight[]=new int[n];
    System.out.println("Enter the values and the weights");
    for(int i=0;i<n;i++) {
      value[i]=sc.nextInt();
      weight[i]=sc.nextInt();
    }
    int knap[][]=knapSack(W,value,weight,n);
    printarray(knap);
    Bactrack(W,value,weight,n,knap);
 
  }
}
