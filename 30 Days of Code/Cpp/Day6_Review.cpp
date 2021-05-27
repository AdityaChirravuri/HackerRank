#include <cmath>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    string str;
    cin >> n;
    while(n){
        cin >> str;
        for(int i=0; i<str.length(); i=i+2){
            cout << str[i];
        }
        cout << " ";
        for(int i=1; i<str.size(); i=i+2)
            cout << str[i];
        cout << endl;
        n--;
    }
    
    
    
    return 0;   
}
