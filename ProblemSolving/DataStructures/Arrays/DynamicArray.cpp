#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, n, q, x, y, idx;
    cin >> n >> q;

    vector<vector<int>>arr;
    for (int i=0; i<n; i++){
        vector<int>a;
        arr.push_back(a);
    }

    int lastanswer = 0;

    for(int i=0; i<q; i++){
        cin >> a >> x >> y;
        if (a == 1){
            idx = (x^lastanswer)%n;
            arr[idx].push_back(y);
        }
        else if (a == 2){
            idx = (x^lastanswer)%n;
            int l = y%arr[idx].size();
            lastanswer = arr[idx][l];
            cout << lastanswer << endl;
        }
    }

    return 0;
}
