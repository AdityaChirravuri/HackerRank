import java.io.*;
import java.util.*;
import java.lang.*;

public class Solution {
    static String Prime(int num){
        boolean flag = true;
        for(int j=2; j<=Math.sqrt(num); j++){
            if(num%j == 0)
            {
                flag = false;
                break;
            }
        }
        
        if(num <= 1)return "Not prime";
        
        if(flag)return "Prime";
        else return "Not prime";
        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        for(int i=0; i<n; i++){
            int num = sc.nextInt();
            System.out.println(Prime(num));
        }
        
    }
}