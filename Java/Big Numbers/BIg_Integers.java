import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        BigInteger a, b;
        Scanner s = new Scanner(System.in);
        a = s.nextBigInteger();
        b = s.nextBigInteger();
        System.out.println(a.add(b));
        System.out.println(a.multiply(b));
        
    }
}
