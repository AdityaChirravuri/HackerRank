import java.io.*;
import java.util.*;

public class Stack{
	public void main(String args[]){
	
		Scanner sc = new Scanner(System.in);
		while(sc.hasNext()){
			String in = sc.next();
			Stack<Character> s = new Stack<Character>();
			
			for(int i=0; i<in.length(); i++){
				if(!s.empty()){
					switch(in.charAt(i)){
					case '}':
						if(s.peek() == '{') s.pop();
						break;
					case ')':
						if(s.peek() == '(') s.pop();
					break;
					case ']':
						if(s.peek() == '[') s.pop();
						break;
					default:s.push(in.charAt(i));					
					break;
					}
				}else s.push(in.charAt(i));
			}
			
			System.out.println(s.empty());
		}
	}
}
				