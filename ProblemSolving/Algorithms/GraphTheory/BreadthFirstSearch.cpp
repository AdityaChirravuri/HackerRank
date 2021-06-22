#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
public:
    Graph(int V);
    void AddEdge(int v, int w);
    void BFS(int s);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::AddEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::BFS(int s)
{
    vector<int> dist;
    dist.resize(V, -1);
    
    
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;

    list<int> queue;

    visited[s] = true;
    dist[s] = 0;
    queue.push_back(s);

    list<int>::iterator i;

    while(!queue.empty()){
        s = queue.front();
        //cout << s << " ";
        queue.pop_front();
        for (i = adj[s].begin(); i != adj[s].end(); ++i){
            if (!visited[*i] && dist[*i] == -1){
                dist[*i] = dist[s] + 1;
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
    
    for(int i=0;i<dist.size();i++)
          if(dist[i]==-1)
              cout<<dist[i]<<" ";
          else if(dist[i]!=0)
              cout<<dist[i]*6<<" ";
      cout<<endl;
}

int main()
{
    int q, n, m, s, x, y;
    cin >> q;
    while(q--){
        cin >> n >> m;
        Graph g(n);
        while(m--){
            cin >> x >> y;
            g.AddEdge(x-1, y-1);
            g.AddEdge(y-1, x-1);
        }
        cin >> s;
        g.BFS(s-1);
    }

    return 0;
}
