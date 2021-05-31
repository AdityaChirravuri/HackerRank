//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Map<String, Integer>mp = new HashMap<String, Integer>();
        for(int i = 0; i < n; i++){
            String name = in.next();
            int phone = in.nextInt();
            // Write code here
            mp.put(name, phone);
            
        }
        while(in.hasNext()){
            String s = in.next();
            // Write code here
            if (!mp.containsKey(s))
            System.out.println("Not found");
            else{
                System.out.println(s+"="+mp.get(s));
            }
        }
        in.close();
    }
}