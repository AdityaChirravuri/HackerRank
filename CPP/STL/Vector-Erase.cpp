#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, i, x, a, b;
    cin >> n;
    vector < int > v;
    for(i=0; i<n; i++){
        int d;
        cin >> d;
        v.push_back(d);
    }
    cin >> x; 
    cin >> a >> b;
    v.erase(v.begin()+x -1);
    v.erase(v.begin()+a-1, v.begin()+b-1);
    n = v.size();
    cout << n << endl;
    for(i=0; i<n; i++)
    cout << v[i] << " ";
    return 0;
}
