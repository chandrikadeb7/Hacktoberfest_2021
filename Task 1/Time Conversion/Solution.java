/*HACKERRANK*/
import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Solution {
    static String timeConversion(String s) {

          int l=s.length();
         
         if(s.substring(l-2,l).equalsIgnoreCase("AM") && Integer.parseInt(s.substring(0,2))==12)
         return "00"+s.substring(2,l-2);
         
         else if(s.substring(l-2,l).equalsIgnoreCase("AM") || ((s.substring(l-2,l).equalsIgnoreCase("PM") && Integer.parseInt(s.substring(0,2))==12)))
         return s.substring(0,l-2);
         
         else
         {
             int d=Integer.parseInt(s.substring(0,2));
             int e=d+12;
             
             return e+s.substring(2,l-2);
         }
    }

    private static final Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scan.nextLine();

        String result = timeConversion(s);

        bw.write(result);
        bw.newLine();

        bw.close();
    }
}
