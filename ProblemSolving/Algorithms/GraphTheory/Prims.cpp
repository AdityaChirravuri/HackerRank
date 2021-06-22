#include <bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX 5001
#define Max INT_MAX
#define P pair<int, int>

//global variables
int n, e, src;
vector<P>adj[MAX];
/*
n -> number of vertices
e -> number of edges
src -> source vertex to start
adj -> to represent the graph in list form
pair<int, int> -> to represent the edges
*/

void Prims()
{
    int sum = 0;
    cin >> src;
    
    priority_queue<P, vector<P>, greater<P>>arr;
    vector<bool>vis(n, false);
    
    arr.push(make_pair(0, src));
    
    while(!arr.empty()){
        P temp = arr.top();
        arr.pop();
        int u = temp.second;
        
        if(vis[u])continue;
        vis[u] = true;
        sum += temp.first;
        
        for(auto i=adj[u].begin(); i!=adj[u].end(); i++){
            int w = (*i).first;
            int v = (*i).second;
            
            if(!vis[v])arr.push(make_pair(w, v));
        }
    }
    cout << sum;
}

int main()
{
    fastIO
    cin >> n >> e;
    
    for(int i=0; i<e; i++){
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({c, b});
        adj[b].push_back({c, a});
    }
    n++;
    Prims();
    
    return 0;
}