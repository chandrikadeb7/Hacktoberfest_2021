//selection sort
import java.util.*;
class sort{
    public void sort(int arr[])
    {
        int temp,j;
        
        for(int i=0; i<arr.length; i++)
        {
            for(j = i+1; j<arr.length; j++)
            {
              
                if(arr[i]>arr[j])
                {
                    temp = arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }    
            }
        }
       
    }
    
    
    public void display(int arr[]){
        System.out.println("Array after sorting.");
        for(int i=0; i<arr.length; i++)
            System.out.print(arr[i]+"  ");
    }
}

public class selection
{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the size of the array");
		int n = in.nextInt();
		Random rand = new Random();
		int arr[] = new int[n];
		for(int i=0; i<arr.length; i++)
		    arr[i] = rand.nextInt(100);
		    
        
        sort ob = new sort();
        ob.sort(arr);
        ob.display(arr);
        in.close();
        
	}
}