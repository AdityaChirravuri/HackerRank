import java.io.*;
import java.util.*;

class Solution {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int d1 = s.nextInt();
        int m1 = s.nextInt();
        int y1 = s.nextInt();
        
        int d2 = s.nextInt();
        int m2 = s.nextInt();
        int y2 = s.nextInt();
        
        int hackos = 0;
        if(y1==y2){
            if(m1>m2){
                hackos = 500*(m1-m2);
            }else if(m1==m2){
                if(d1>d2)hackos = 15*(d1-d2);
                else hackos = 0;
            }else hackos = 0;
        }else if(y2>y1)hackos = 0;
        else if(y2<y1)hackos = 10000;

        System.out.println(hackos);
    }
}
