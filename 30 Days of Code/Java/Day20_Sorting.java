import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;



public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        List<Integer> a = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());

        // Write your code here
        int []arr = new int[a.size()];
        for(int i=0; i<arr.length; i++)
            arr[i] = a.get(i);
        
        int swaps = 0;
        for(int i=0; i<arr.length; i++){
            for(int j=0; j<arr.length-1; j++){
                if(arr[j] > arr[j+1]){
                    int temp  =arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                    swaps = swaps + 1;
                }
            }
        }
        
        System.out.println("Array is sorted in " + swaps + " swaps.");
        System.out.println("First Element: "+ arr[0]);
        System.out.println("Last Element: "+arr[n-1]);

        bufferedReader.close();
    }
}
