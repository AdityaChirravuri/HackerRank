#include <bits/stdc++.h>
using namespace std;

int num(long long n)
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
    int t;
    cin >> t;
    long long n;
    while(t--)
    {
        cin >> n;
        if(num(n-1)&1)cout << "Louise" << endl;
        else cout << "Richard" << endl;
    }

    return 0;
}
