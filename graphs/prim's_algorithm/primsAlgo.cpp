#include <iostream>
#include <vector>   //for vector
#include <queue>    //for priority_queue
#include <utility>  //for pair<int,int>

using namespace std;

typedef pair<int,int> p;
void addEdge(vector<p> adj[],int u,int v,int w)
{
    adj[u].push_back({w,v});     //w is weight and v is vertex
    adj[v].push_back({w,u});     //u is vertex
}
void PrimsMst(vector<p> adj[],int V)
{
    priority_queue<p, vector<p> ,greater<p> > pq;
    vector<int> parent(V,-1);
    vector<int> dist(V,INT_MAX);
    vector<bool> inMst(V,false);
    int src=0;
    dist[src]=0;
    pq.push({dist[src],src});
    while(!pq.empty())
    {
        p m=pq.top();
        pq.pop();
        int u=m.second;
        int d=m.first;
        if(inMst[u]==true)
            continue;
        inMst[u]=true;
        for(int i=0;i < adj[u].size();i++)
        {
            int w=adj[u][i].first;
            int v=adj[u][i].second;
            if(!inMst[v] && dist[v]>w)
            {
                dist[v]=w;
                parent[v]=u;
                pq.push({w,v});
            }
        }
    }
    cout<<endl<<endl;
    cout<<"Printing Edges in MST "<<endl;
    for(int i=1;i<V;i++)
    {
        cout<<"Edge-"<<i<<" is "<<parent[i]<<" to "<<i<<endl;
    }
}
int main()
{
    int V,E,v,u,w;       //V(no. of vertices), E(no of edges), v(vertex), u(vertex), w(weight)
    cout<<"Enter the no of vertices: ";
    cin>>V;
    cout<<"Enter the no of edges: ";
    cin>>E;
    vector<p> adj[V];
    for(int i=0;i<E;i++)
    {
        cout<<"Enter Edge-"<<i+1<<endl;
        cout<<"From: ";
        cin>>u;
        cout<<"To: ";
        cin>>v;
        cout<<"Weight: ";
        cin>>w;
        addEdge(adj,u,v,w);
    }
    cout<<endl;
    cout<<"Prims MST"<<endl;
    PrimsMst(adj,V);
    return 0;
}