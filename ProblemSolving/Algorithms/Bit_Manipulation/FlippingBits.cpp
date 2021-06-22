#include <bits/stdc++.h>
using namespace std;

long long int power(int i)
{
    if(i==0)return 1;
    return 2*power(i-1);
}

int main()
{
    long long sum = 0, num;
    int t;
    cin >> t;
    for(int i=0; i<32; i++){
        //printf("2^%d = %lld\n", i, power(i));
        sum += power(i);
    }

    //printf("%lld", sum);

    while(t--){
        cin >> num;
        cout << sum-num << endl;
    }
    return 0;
}
