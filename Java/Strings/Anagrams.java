import java.util.*;
import java.io.*;
// three solutions for this problem are available
class methods{
	public boolean method1(String a, String b){
		/*
		sort takes nlogn time and equals to as n(actually n/2 but iam taking just order
		so totally nlogn time but we can do this in n time (method 2)
		*/
		char ar[] = a.toCharArray();
		char br[] = b.toCharArray();
		
		Arrays.sort(ar);
		Arrays.sort(br);
		
		if(Arrays.equals(ar, br))return true;
		else return false;
	}
	
	public boolean method2(String a, String b){
		
		if(a.length()!=b.length())return false;
		
		Map<Character, Integer> arr = new HashMap<Character, Integer>();
		
		for(int i=0; i<a.length(); i++){
				char temp = a.charAt(i);
				if(arr.containsKey(temp)){
					Integer freq = arr.get(temp);
					arr.put(temp, ++freq);
				}else 
					arr.put(temp, 1);
		}
		
		for(int i=0; i<b.length(); i++){
			char temp = b.charAt(i);
			if(arr.containsKey(temp)){
				Integer freq =arr.get(temp);
				if(freq==0)arr.remove(temp);
				else {
					arr.put(temp, --freq);
				}
			}
			else return false;
		}
		return true;
	}
	
	public boolean Method3(String a, String b){
		int sum=0;
		
		if(a.length()!=b.length())return false;
		
		for(char c = 'a'; c <= 'z'; c++){
			for(int i=0; i<a.length(); i++){
				if(a.charAt(i) == c)sum++;
				
				if(b.charAt(i) == c)sum--;
			}
		}
		
		if(sum!=0)return false;
		
		return true;
	}
}

class solution{
	public static void main(String []args){
		Scanner sc = new Scanner(System.in);
		String a = sc.next();
		String b = sc.next();
		methods m = new methods();
		
		a = a.toLowerCase();
		b = b.toLowerCase();
		/*if(m.method1(a, b))System.out.println("Anagrams");
		else System.out.println("Not Anagrams");
		
		if(m.method2(a, b))System.out.println("Anagrams");
		else System.out.println("Not Anagrams");
		*/
		
		if(m.Method3(a, b))System.out.println("Anagrams");
		else System.out.println("Not Anagrams");
		
	}
}
		