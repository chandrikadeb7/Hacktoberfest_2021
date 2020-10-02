
//Insertion Sort
import java.util.*;

class sort {
    public void sort(int arr[]) {
        int temp, j;

        for (int i = 1; i <= arr.length; i++) {
            j = i - 1;

            while (j > 0 && arr[j - 1] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                j--;
            }
        }
    }

    public void display(int arr[]) {
        System.out.println("Array after sorting.");
        for (int i = 0; i < arr.length; i++)
            System.out.print(arr[i] + "  ");
    }
}

public class insertionSort {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the size of the array");
        int n = in.nextInt();
        Random rand = new Random();
        int arr[] = new int[n];
        for (int i = 0; i < arr.length; i++)
            arr[i] = rand.nextInt(100);

        sort ob = new sort();
        ob.sort(arr);
        ob.display(arr);
        in.close();
    }
}