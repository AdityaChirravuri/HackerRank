#include <bits/stdc++.h>
using namespace std;

#define int long long int


int solve(int n, int m) {
    return ((((m*(m-1))/2)*(n/m))+(((n%m)*((n%m)+1))/2));
}

int32_t main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        cout << solve(n, m) << "\n";
    }
    
    return 0;
}
