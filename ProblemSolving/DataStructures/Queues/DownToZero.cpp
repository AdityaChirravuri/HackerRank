#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max = 1000001;
    int* arr = new int[max];

    for(int i=0; i<max; i++)arr[i] = -1;

    arr[0]=0; arr[1]=1; arr[2]=2; arr[3]=3;

    for(int i=1; i<max; i++){
        if(arr[i] == -1 || arr[i] > arr[i-1]+1)
            arr[i] = arr[i-1]+1;
        for(int j=1; j<=i && j*i < max; j++){
            if(arr[j*i] == -1 || arr[j*i] > (arr[i] +1))
                arr[j*i] = arr[i]+1;
        }
    }


    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << arr[n] << endl;
    }


    return 0;
}
