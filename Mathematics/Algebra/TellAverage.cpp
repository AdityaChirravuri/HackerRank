#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int M = 1e9+7;

int32_t main() {
    list<int>arr;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    
    while(arr.size()>1){
        int a = arr.front();
        arr.pop_front();
        int b = arr.front();
        arr.pop_front();
        int temp = (a%M + b%M + ((a%M)*(b%M))%M)%M;
        arr.push_front(temp);
    }
    cout << arr.front();
    arr.pop_front();
    return 0;
}
