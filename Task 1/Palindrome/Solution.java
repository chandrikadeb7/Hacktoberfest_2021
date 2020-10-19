package palindrome;

import java.util.Scanner;
import java.util.Stack;

 class Q1 {

    /**
     * Checks if a String is Palindrome
     *
     * @param string
     * @return true if palindrome else returns false
     */
    public static boolean checkPalindrome(String string) {
        Stack stack = new Stack();

        for (int i = 0; i < string.length(); i++) {
            stack.push(string.charAt(i));
        }

        String reverseString = "";

        while (!(stack.size() == 0)) {
            reverseString += stack.pop();
        }

        if (string.equals(reverseString)) {
            return true;
        } else {
            return false;
        }
    }

    public static void main(String[] agrs) {
        System.out.println("Enter an integer:");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        System.out.println(checkPalindrome(String.valueOf(a)));

    }

}
