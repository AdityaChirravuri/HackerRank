#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <string>arr;
    int q, t;
    cin >> q;
    string s = "";
    for(int i=0; i<q; i++){
        cin >> t;
        if(t == 1){
            string str;
            cin >> str;
            arr.push(s);
            s = s + str;
            //arr.push(s);
        }
        
        if(t == 2){
            int k;
            cin >> k;
            arr.push(s);
            s.erase(s.size()-k);
            //arr.push(s);
        }
        
        if(t == 3){
            int pos;
            cin >> pos;
            cout << s[pos-1] << endl;
        }
        
        if(t == 4){
            s = arr.top();
            arr.pop();
        }
    }
    return 0;
}