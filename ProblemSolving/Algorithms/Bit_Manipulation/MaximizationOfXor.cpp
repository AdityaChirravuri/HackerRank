#include <iostream>
using namespace std;

int main()
{
    int l, r, x;
    cin >> l >> r;
    int m = -1, Mxor = -1;
    for(int i=l; i<=r; i++){
        for(int j=i; j<=r; j++){
            x = i^j;
            cout << i << " " << j << " " << x << endl;
            if(m < x)m = x;
        }
        if(Mxor < m)Mxor = m;
        cout << endl;
    }

    cout << Mxor;
    return 0;
}
