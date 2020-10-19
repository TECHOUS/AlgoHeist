
//A component is connected if every vertex can be reached by every other vertices. Kosaraju Algorithm is used to find connected components in directed graph.
#include<bits/stdc++.h>
using namespace std;
/*  Function to find the number of strongly connected components
*   using Kosaraju's algorithm
*   V: number of vertices
*   adj[]: array of vectors to represent graph
*/
int dfs(vector<int>adj[],vector<bool>&visited,int u,stack<int>&st)
{
   visited[u]=true;
    for(int x:adj[u])
    {
        
        if(!visited[x])
        {
            dfs(adj,visited,x,st);
        }
    }
    st.push(u);
    //cout<<u<<endl;
}
int dfs2(vector<int>adj2[],vector<bool>&visited2,int u)
{
    //cout<<u<<" ";
    visited2[u]=true;
    for(int x:adj2[u])
    {
        if(!visited2[x])
        {
            dfs2(adj2,visited2,x);
            //cout<<x<<" ";
        }    
    }
}
int kosaraju(int V, vector<int> adj[])
{
    stack<int>st;
    vector<bool> visited(V,false);
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
            dfs(adj,visited,i,st);
    } 
    vector<bool>visited2(V,false);
    vector<int>adj2[V+1];
    /*vector<int>* reverse(vector<int> adj[],int V){
    vector<int>* adj1=new vector<int>[V];
    for(int i=0;i<V;i++){
        for(int j=0;j<adj[i].size();j++){
            adj1[adj[i][j]].push_back(i);
        }
    }
    return adj1;
}*/
    for(int u=0;u<V;u++)
    {
        for(int v:adj[u])
        {
            adj2[v].push_back(u);
        }
        
    }
    int count=0;
    while(!st.empty())
    {
        int tp=st.top();
        if(visited2[tp])
            st.pop();
        else
        {
            count++;
            st.pop();
            visited[tp]=true;
            dfs2(adj2,visited2,tp);
           //cout<<endl;
        }    
    }
  
    return count;
}



int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int m, n;
        vector<int> adj[a];
        for (int i = 0; i < b; i++) {
            cin >> m >> n;
            adj[m].push_back(n);
        }
        cout << kosaraju(a, adj) << endl;
    }
    return 0;
}
  // } Driver Code Ends
