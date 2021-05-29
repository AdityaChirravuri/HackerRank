#include <bits/stdc++.h>
using namespace std;

string Prime(int num)
{
    bool flag = true;
    
    for(int j=2; j<=sqrt(num); j++){
        if(num%j == 0){
            flag = false;
            break;
        }
    }
    
    if(num<=1)flag = false;
    
    if(flag)return "Prime\n";
    else return "Not prime\n";
    
}

int main() {
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t){
        int num;
        cin >> num;
        cout << Prime(num);
        t--;
    }
    
    return 0;
}
