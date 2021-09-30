import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class Result {

    /*
     * Complete the 'whoIsTheWinner' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts INTEGER_ARRAY arr as parameter.
     */

    public static String whoIsTheWinner(List<Integer> arr) {
        int size = arr.size();
        Set<Integer> s = new HashSet<>();
        for(int i = 0; i < size; i++) {            
            s.add(arr.get(i));
        }
        if(s.size() == size)
            return "First";
        else {
            if(size % 2 == 0)
                return "Second";
            else
                return "First";
        }   
    }   
}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = Integer.parseInt(bufferedReader.readLine().trim());

        for (int tItr = 0; tItr < t; tItr++) {
            int n = Integer.parseInt(bufferedReader.readLine().trim());

            String[] arrTemp = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

            List<Integer> arr = new ArrayList<>();

            for (int i = 0; i < n; i++) {
                int arrItem = Integer.parseInt(arrTemp[i]);
                arr.add(arrItem);
            }

            String result = Result.whoIsTheWinner(arr);

            bufferedWriter.write(result);
            bufferedWriter.newLine();
        }

        bufferedReader.close();
        bufferedWriter.close();
    }
}
