import java.io.*;
import java.util.*;

public class map{
	public static void main(String[] args){
		HashMap<String, Integer> arr= new HashMap<String, Integer>();
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		scan.nextLine();
		for(int i=0; i<n; i++){
			String s = scan.nextLine();
			int num = scan.nextInt();
			arr.put(s, num);
			scan.nextLine();
		}
		
		while(scan.hasNext()){
			String s = scan.nextLine();
			if(arr.containsKey(s)){
				System.out.println(s + "=" + arr.get(s));
			}else System.out.println("Not Found");
		}
		
		
		/*for(Map.Entry<String, Integer> i : arr.entrySet())
			System.out.println(i.getKey() + ": " + i.getValue());*/
	}
}