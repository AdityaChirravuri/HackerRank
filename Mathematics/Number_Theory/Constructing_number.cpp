#include <bits/stdc++.h>
using namespace std;

#define int long int

int32_t main()
{
    int t;
    cin >> t;
    
    while(t--){
        int n, s = 0, temp;
        cin >> n;
        
        
        for(int i=0; i<n; i++){
            cin >> temp;
            s += temp;
        }
        
        if(s%3 == 0)cout << "Yes\n";
        else cout << "No\n";
        
    }
    
    return 0;
}
