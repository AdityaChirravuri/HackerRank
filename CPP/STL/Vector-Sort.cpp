#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int>a;
    int n;
    cin >> n;
    int i;
    for(i=0; i<n; i++){
        int data;
        scanf("%d", &data);
        a.push_back(data);
    }
    sort(a.begin(), a.end());
    for(i=0; i<a.size(); i++)
    cout << a[i] << " ";
    
    return 0;
}
