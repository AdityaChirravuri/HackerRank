// substrings
import java.util.*;
class method{
	public String method1(String str, int num){
		SortedSet<String>arr = new TreeSet<String>();
		
			for (int i=0; i<str.length()-num+1; i++){
			arr.add(str.substring(i, i+num));
			}
			/*for (String i : arr){
				System.out.println(i);
			}*/
			
			return arr.first() + "\n" + arr.last(); 
	}

	public String method2(String str, int k){
		String small;
		String large;
		small = large = str.substring(0, k);
	
		for(int i=0; i<str.length()-k+1; i++){
			String temp = str.substring(i, i+k);
			if(temp.compareTo(small) < 0 )small = temp;
		
			if(temp.compareTo(large) > 0)large = temp;
		}
	
		return small+"\n" + large;
	}

}
class substring{
	public static void main(String []args){
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		int num = sc.nextInt();
		
		method m = new method();
		System.out.println("USING FIRST METHOD: ");
		System.out.println(m.method1(str, num));
		System.out.println("USING SECOND METHOD: ");
		System.out.println(m.method2(str, num));
	}
}