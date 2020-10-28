import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class Result {

    /*
     * Complete the 'maximumStones' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts INTEGER_ARRAY arr as parameter.
     */

    public static int maximumStones(List<Integer> arr) 
 {
    int oddPosition = 0;
    int evenPosition = 0;
    
    for(int i=0;i<arr.size(); i++)
    {
        if(i%2 == 0)
        {
            evenPosition += arr.get(i);
        }
        else
        {
            oddPosition += arr.get(i);
        }               
    }
       
    while(evenPosition!=oddPosition)
    {       
        if(evenPosition>oddPosition)
        {
            evenPosition--;                
        }
        else if(evenPosition<oddPosition)
        {
            oddPosition--;                
        } 
    }     

    return evenPosition*2; 
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        String[] arrTemp = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

        List<Integer> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            int arrItem = Integer.parseInt(arrTemp[i]);
            arr.add(arrItem);
        }

        int result = Result.maximumStones(arr);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
