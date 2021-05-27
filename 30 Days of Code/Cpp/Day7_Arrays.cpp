#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr;
    vector<int>::iterator it;
    int n;
    
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    
    for(it=arr.end()-1; it!=arr.begin()-1; it--){
        cout << *it << " ";
    }
    
    return 0;
}