#include <bits/stdc++.h>
using namespace std;

void ans(int arr[], int n, int k)
{

    deque<int>ar;

    int i;
    for(i=0; i<k; i++){
        while((!ar.empty())&& arr[i] >= arr[ar.back()])ar.pop_back();

        ar.push_back(i);
    }

    for(; i<n; i++){
        cout << arr[ar.front()] << " ";
        while(!ar.empty() && ar.front() <= i-k)ar.pop_front();

        while((!ar.empty()) && arr[i] >= arr[ar.back()])ar.pop_back();

        ar.push_back(i);
    }

    cout << ar.front() << endl;

}

int main()
{
    int n, k;
    cin >> n >> k;

    int *arr = new int[n];

    for (int i=0; i<n; i++)
        cin >>arr[i];

    ans(arr, n, k);

    return 0;
}
