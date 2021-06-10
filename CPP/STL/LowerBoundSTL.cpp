/*
vector can be equalised with vector only
and cannot be equalised with any other types
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n, t, temp;
    vector<int>arr;
    vector <int>::iterator low, it;
    cin >> n;
    for(auto i=1; i<=n; i++){
        cin >> temp;
        arr.push_back(temp);
        }

    cin >> t;

    for(auto i=0; i<t; i++){
        cin >> temp;
        low = lower_bound(arr.begin(), arr.end(), temp);
        if(arr[low - arr.begin()] == temp)cout << "Yes "  << low - arr.begin() + 1 << endl;
        else cout << "No " <<  low - arr.begin() +1 << endl;
    }

    return 0;
}
