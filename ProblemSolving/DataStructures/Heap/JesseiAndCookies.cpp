#include <bits/stdc++.h>
using namespace std;

int cookies(int k, vector<int>A)
{
    int count = 0;
     priority_queue<int, vector<int>, greater<int>>p;
     for(int i=0; i<A.size(); i++){
         p.push(A[i]);
     }

     if(p.top() >= k)return 0;

     while (true)
     {
         int a = p.top();
         p.pop();
         if(p.size() == 0)return -1;
         int b = p.top();
         p.pop();

         p.push(a + 2*b);
         count++;

         if(p.top() >= k)return count;
         else continue;
     }
}

int main()
{
    int n, k;
    vector<int>arr;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << cookies(k, arr);


    return 0;
}
