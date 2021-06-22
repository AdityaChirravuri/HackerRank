#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

struct Node{
    int order, prep, time, cus;  
};

bool cmp(const struct Node a, const struct Node b)
{
    if(a.time > b.time )return false;
    else if(a.time == b.time){
        if(a.order > b.order)return true;
        else return false;
    }else return true;
}

int main()
{
    FastIO
    
    int n;
    cin >> n;
    
    vector<Node>arr;
    
    for(int i=0; i<n; i++){
        Node temp;
        cin >> temp.order;
        cin >> temp.prep;
        temp.time = temp.order + temp.prep;
        temp.cus = i+1;
        arr.push_back(temp);
    }
    
    /*for(auto i: arr){
        cout << i.order << " " << i.prep << " " << i.time << "\n";
    }*/
    
    sort(arr.begin(), arr.end(), cmp);
    
    for(auto i: arr){
        cout << i.cus << " " ; //<< " " << i.prep << " " << i.time << "\n";
    }
    
    
    return 0;
}