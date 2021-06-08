import java.io.*;
import java.util.*;

class deque{
	public static void main(String []args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int m = sc.nextInt();
		/*
		Solution 1
		int [] arr = new int[n];
		
		for(int i=0; i<n; i++){
			arr[i]= sc.nextInt();
		}
		int max = -1;
		for(int i=0; i<n-m; i++){
			HashSet <Integer> s = new HashSet <Integer>();
			for(int j=i; j<i+m; j++){
				s.add(arr[j]);
			}
			if(s.size() > max)max = s.size();
		}*/
		
		//solution 2
		HashSet<Integer> s = new HashSet<Integer>();
		Deque<Integer> arr = new ArrayDeque<Integer>();
		int max = -1;
		for(int i=0; i<n; i++){
			int num = sc.nextInt();
			s.add(num);
			arr.add(num);
			
			if(arr.size() == m){
				if(s.size()>max)max = s.size();
				int top = arr.remove();
				if(!arr.contains(top))s.remove(top);
			}
		}
		
		System.out.println(max);
	}
}
			