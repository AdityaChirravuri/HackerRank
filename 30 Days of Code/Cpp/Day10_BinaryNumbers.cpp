#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int count, maxcount ;
    count = maxcount = 0;
    while(n){
        int rem = n%2;
        if(rem == 1){
            count++;
            maxcount = max(maxcount, count);
        }
        else {
            count = 0;
        }
        n = n/2;
    }
    
    
    cout << maxcount << endl;

    return 0;
}
