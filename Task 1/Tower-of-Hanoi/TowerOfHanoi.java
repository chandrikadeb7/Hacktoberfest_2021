import java.util.Scanner;

public class TowerOfHanoi {

    public void solveTowerOfHanoi(int n, String source, String supportingRod, String destination)
    {
        if(n==1)
        {
            System.out.println(source+" --> "+destination);
            return;
        }
        // Move top n-1 disks from A to B using C as supportingRod.
        // (1, A, C, B)
        // (n-1, Source ,Supporting rod, Destination)

        solveTowerOfHanoi(n-1, source, destination, supportingRod);

        //Move remaining disks from A to C
        //(A, C)
        System.out.println(source+" --> "+destination);

        // Move n-1 disks from B to C using A as supportingRod.
        //(1, B, A, C)
        solveTowerOfHanoi(n-1, supportingRod, source, destination);

    }

    public static void main(String args[])
    {
        TowerOfHanoi obj = new TowerOfHanoi();

        System.out.println("Enter number of disks :- ");

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.close();

        System.out.println("Move disks as below illustration.");
        obj.solveTowerOfHanoi(n, "A", "B", "C");

    }
}