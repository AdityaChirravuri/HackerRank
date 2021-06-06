import java.io.*;
import java.util.*;

class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int a, b, c;
        try{
            a = sc.nextInt();
            b = sc.nextInt();
            c = a/b;
            System.out.println(c);
        }catch(InputMismatchException e){
            System.out.println("java.util.InputMismatchException");
        }
        catch(ArithmeticException e){
            System.out.println("java.lang.ArithmeticException: / by zero");
        }
        
    }
}