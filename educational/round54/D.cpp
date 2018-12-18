#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

vector<int> dist(1e6, INF);

typedef pair<int, int> iPair; 

class Graph 
{ 
    int V; 
    list< pair<int, iPair> > *adj; 
  
public: 
    Graph(int V); 
    void addEdge(int u, int v, int w, int x); 
    void shortestPath(int s); 
}; 

Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<pai<int,iPair> > [V]; 
} 
  
void Graph::addEdge(int u, int v, int w, int x) 
{ 
    adj[u].push_back({v,{w,x}}); 
    adj[v].push_back({u,{w,x}}); 
} 

void Graph::shortestPath(int src) 
{ 
    priority_queue< pair<int,iPair>, vector <pair<int,iPair>> , greater<pair<int,iPair>> > pq;

    pq.push(make_pair(0, src)); 
    dist[src] = 0;

    while (!pq.empty()) 
    { 
        int u = pq.top().second; 
        pq.pop(); 

        list< pair<int, int> >::iterator i;

        for (i = adj[u].begin(); i != adj[u].end(); ++i) 
        { 
            int v = (*i).first; 
            int weight = (*i).second; 

            if (dist[v] > dist[u] + weight) 
            {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v)); 
            } 
        } 
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,d;
    cin >> n >> m >> d;

    for(int i=0;i<m;i++)
    {
        int x,y,w;
        cin >> x >> y >> w;

        g.addEdge(x,y,w);
    }

    g.shortestPath(1);

    for()
}