#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, Phonenumber;
    string name;
    map<string, int>mp;
    map<string, int>::iterator m;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> name >> Phonenumber;
        mp.insert(pair<string, int>(name, Phonenumber));
    }
    
    while(cin >> name){
        m = mp.find(name);
        if(m!=mp.end()){
            cout << name << "=" << mp[name] << endl;
        }else
            cout << "Not found" << endl;
    }
       
    return 0;
}