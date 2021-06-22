#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll>arr(n);
    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }
    
    ll count = 0;
    sort(arr.begin(), arr.end());
    
    ll l = 0;
    ll r = 0;
    
    while(r < n){
        if(arr[r]-arr[l] == k){
            l++;
            r++;
            count++;
        }else if(arr[r] - arr[l] > k )l++;
        else r++;
    }
    cout << count;
    return 0;
}