#include <bits/stdc++.h>
using namespace std;

#define Max 500001
int n;
vector<int>arr[Max];
vector<bool>vis(Max, false);

int BFS(int src)
{
    vis[src] = true;
    list<int>a;
    a.push_back(src);
    int size=1;
    
    while(!a.empty()){
        src = a.front();
        a.pop_front();
        for(auto i=arr[src].begin(); i!=arr[src].end(); i++){
            if(!vis[*i]){
                //cout << *i << " ";
                a.push_back(*i);
                vis[*i] = true;
                size++;
            }
        }
    }
    
    return size;
}

int main()
{
    cin >> n;
    
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    vector<int>p;
    for(int i=0; i<=2*n; i++){
        if(!vis[i]){
            p.push_back(BFS(i));
        }
    }
    sort(p.begin(), p.end());
    vector<int>::iterator it;
    for(it=p.begin(); it!=p.end(); it++){
        if(*it!=1){
            cout << *it << " " << p[p.size()-1];
            break;
        }
    }


    return 0;
}
