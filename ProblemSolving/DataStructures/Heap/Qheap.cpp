#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> arr;
    int n, a, b;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a;
        switch(a){
            case 1:
                cin >> b;
                arr.insert(b);
                break;
            case 2:
                cin >> b;
                arr.erase(arr.find(b));
                break;
            case 3:
                cout << *arr.begin() << endl;
                break;
        }
    }
    
    return 0;
}
