#include <bits/stdc++.h>
using namespace std;

int bubbleSort(vector<int>&a)
{
    int n = a.size();
    int swaps = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp;
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
                swaps++;
            }
        }
    }
    
    return swaps;
}

int main()
{
    int n;
    cin >> n;
    
    vector<int>arr;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    
    cout << "Array is sorted in " << bubbleSort(arr) << " swaps.\n";
    cout << "First Element: " << arr[0] << "\n";
    cout << "Last Element: " << arr[n-1];
    
    
    return 0;   
}