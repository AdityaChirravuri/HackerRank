import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine().trim();
        // Write your code here.blank spaces 
        if(s.length()>0){
            String k = "[, ! @ ? ., _ ']+";
            String [] arr = s.split(k);
            System.out.println(arr.length);
            for(String i: arr)System.out.println(i);
        }else System.out.println("0");
        
        scan.close();
    }
}

