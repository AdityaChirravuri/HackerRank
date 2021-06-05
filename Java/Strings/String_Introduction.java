import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        //1st one is done
        String C =  A+B;
        System.out.println(C.length());
        
        //2nd one is:
        //A.sort();
        //B.sort();
        if(A.compareTo(B) <= 0)System.out.println("No");
        else System.out.println("Yes");
        
        // 3rd one is done
        String First1 =  A.substring(0, 1);
        String rem1 = A.substring(1, A.length());
        First1 = First1.toUpperCase();
        A = First1 + rem1;
        
        String First2 =  B.substring(0, 1);
        String rem2 = B.substring(1, B.length());
        First2 = First2.toUpperCase();
        B = First2 + rem2;
        
        System.out.println(A + " " + B);
        
    }
}



