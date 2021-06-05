import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        StringBuilder a = new StringBuilder();
        a.append(A);
        a.reverse();
        String r = a.toString();
        if (A.compareTo(r) == 0)System.out.println("Yes");
        else System.out.println("No");   
    }
}
