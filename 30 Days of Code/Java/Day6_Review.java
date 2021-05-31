import java.io.*;
import java.util.*;

class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        while (n!=0){
            String st = sc.next();
            String s = "";
            for(int i=0; i<st.length(); i=i+2)
                s = s+st.charAt(i);
            s = s + " ";
            for(int i=1; i<st.length(); i=i+2)
                s = s+st.charAt(i);
            System.out.println(s);
            n--;
        }
    }
}