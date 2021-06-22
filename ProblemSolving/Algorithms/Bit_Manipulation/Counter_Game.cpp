#include <bits/stdc++.h>
using namespace std;

int num(int n)
{
    int count = 0;
    while(n!=0){
        n &= n-1;
        count++;
    }

    return count++;
}

int main()
{
    int n, t;
    cin >> t;

    while(t--)
    {
        cin >> n;
        if(num(n)&1)cout << "Louise" << endl;
        else cout << "Richard" << endl;
    }

    return 0;
}
