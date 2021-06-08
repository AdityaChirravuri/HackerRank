import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int q = sc.nextInt();
        
        BitSet b1 = new BitSet(size);
        BitSet b2 = new BitSet(size);
        
        BitSet bitset[] = new BitSet[3];
        
        bitset[1] = b1;
        bitset[2] = b2;
        
        for(int i=0; i<q; i++){
            String str = sc.next();
            int x = sc.nextInt();
            int y = sc.nextInt();
            switch(str){
                case "AND":
                    bitset[x].and(bitset[y]);
                    break; 
                case "OR":
                    bitset[x].or(bitset[y]);
                    break;
                case "XOR":
                    bitset[x].xor(bitset[y]);
                    break;
                case "FLIP":
                    bitset[x].flip(y);
                    break;
                case "SET":
                    bitset[x].set(y);
                    break;
            }
            System.out.printf("%d %d\n", b1.cardinality(), b2.cardinality() ) ; 
        }
    }
}