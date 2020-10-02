import java.util.*;

class Solution {
    static Scanner in = new Scanner(System.in);

    private static int check() {
        int num = -1;
        int count = 100000000;

        int n = in.nextInt();
        int k = in.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {

            arr[i] = in.nextInt();
        }
        for (int i = 0; i < n; i++) {

            int a = arr[i];
            int c = 1;
            while (a <= k) {
                a = arr[i] * c;
                c++;
            }
            a -= arr[i];

            if (a == k) {

                if (c < count) {
                    count = c;
                    num = arr[i];
                }
            }

        }
        return num;

    }

    public static void main(String[] args) {
        int t = in.nextInt();
        for (int i = 0; i < t; i++) {
            int a = check();
            System.out.println(a);
        }
    }
}