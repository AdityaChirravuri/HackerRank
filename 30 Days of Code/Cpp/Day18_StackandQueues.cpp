#include <bits/stdc++.h>
using namespace std;

class Solution {
    //Write your code here
    
    stack<char>st;
    queue<char>a;
    public:
    
    void pushCharacter(char ch){
        st.push(ch);
    }
    
    char popCharacter(){
        char ch = st.top();
        st.pop();
        return ch;
    }
    
    void enqueueCharacter(char ch)
    {
        a.push(ch);
    }
    
    char dequeueCharacter()
    {
        char ch = a.front();
        a.pop();
        return ch;
    }

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}