import java.io.*;
import java.util.*;

public class javaList{
	public static void main(String[] args){
		List<Integer>arr = new ArrayList<Integer>();
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		for(int i=0; i<n; i++){
            arr.add(sc.nextInt());
        }
		
		for(int i: arr)
		System.out.print(i+"  ");
		
		System.out.println();
		
		int q = sc.nextInt();
		
		for(int i=0; i<n; i++){
			String str = sc.nextLine();
            int pos;
            if(str.equals("Insert")){
                int a;
                pos = sc.nextInt();
                a = sc.nextInt();
                arr.add(pos, a);
            }
            else if(str.equals("Delete")){
                pos = sc.nextInt();
                arr.remove(pos);
            }
		}
		for (int i: arr)
		System.out.print(i+" ");
	}
}