#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        ll a, b, x;
        cin >> a >> b >> x;
        if(b<0 && a!= 1)cout << "0\n";
        else{
            ll value = pow(a, b);
            //cout << value << " ";
            ll den = value%x;
            if(den > x/2)den = den-x;
            cout << value-den << "\n";
        }
    }
    
    return 0;
}
