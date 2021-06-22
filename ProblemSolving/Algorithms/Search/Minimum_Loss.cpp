#include <bits/stdc++.h>
using namespace std;

int MinimumLoss_Naive(vector<int>arr, int n)
{
    int diff;

    vector<int>loss;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            diff = arr[j] - arr[i];
            if(diff < 0)
                loss.push_back(diff);
        }
    }
    int maxdiff = INT_MIN;
    for(auto it=loss.begin(); it!=loss.end(); it++){
        //cout << *it << endl;
        if(maxdiff < *it)maxdiff = *it;
    }

    return abs(maxdiff);
}

int MinimumLoss_SearchAlgo(vector<int>arr, int n)
{
    /*
    The idea is to find the minimum loss(maximum negative integer)
    i.e from -5, -7, -2 -12 the minimum loss is -2(maximum negative integer)
    */
    vector<int>year;
    year = arr;         //copying the vector
    sort(arr.begin(), arr.end());
    int min_diff = INT_MIN;

    for(auto it = arr.begin()+1; it!=arr.end(); it++){
        if((*it - *(it-1) < min_diff) && (find(year.begin(), year.end(), *it) < find(year.begin(), year.end(), *(it-1)) ))
           min_diff = *it - *(it-1);
    }

    return min_diff;
}

int main()
{
    int n, temp;
    vector<int>arr;
    cin >> n;
     for(int i=0; i<n; i++){
        cin >> temp;
        arr.push_back(temp);
     }

     cout << MinimumLoss_Naive(arr, n);
     cout << MinimumLoss_SearchAlgo(arr, n);

    return 0;
}
