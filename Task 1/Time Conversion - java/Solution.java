import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    //static String timeConversion(String s) {
        // Complete this function
    //}

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String time = in.next();
        String pm = time.substring(time.length()-2);
        String[] timeMil = time.replace("PM","").replace("AM","").split(":");
        int numAc = Integer.parseInt(timeMil[0]);
          timeMil[0] =  numAc + ((pm.equals("PM"))?((numAc!=12)?12:0):((numAc==12)?-numAc:0)) + "";
          timeMil[0] =((timeMil[0].equals("0") || pm.equals("AM"))?"0":"") + timeMil[0];        
        System.out.println(timeMil[0]+":"+timeMil[1]+":"+timeMil[2]);
    }
}