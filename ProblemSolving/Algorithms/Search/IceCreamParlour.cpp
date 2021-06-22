#include <bits/stdc++.h>
using namespace std;

void Cost(vector<int>arr, int cost)
{
    map<int, int>a;
    
    for(int i=0; i<arr.size(); i++){
        if(a.find(cost - arr[i]) != a.end())
        {
            cout << a[cost - arr[i]]+1 <<  " " << i+1 << endl;
            return;
        }
        a[arr[i]] = i;
    }
}

void Print(vector<int>a)
{
    for(int i: a)
    cout << i << " ";
    
    cout << endl;
}

int main()
{
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> k;
        cin >> n;
        vector<int>arr;
        for(int i=0; i<n; i++){
            int temp; 
            cin >> temp;
            arr.push_back(temp);
        }
        //Print(arr);
        Cost(arr, k);
    }
    
    return 0;
}
