#include<bits/stdc++.h>
using namespace std;

//start the vertex numbering from 0 in the input

void dfs(vector<int>adj[],int source, bool visited[]){
	if(visited[source]==false){
		visited[source] = true;
		cout<<source<<"-> ";
		for(int i=0;i<adj[source].size();i++){
			if(!visited[adj[source][i]])
				dfs(adj,adj[source][i],visited);
		}
	}
}
int main(){
	int e,v,u,w,source;
	cout<<"enter number of edges: ";
	cin>>e;
	cout<<"enter number of vertices: ";
	cin>>v;
	cout<<"tell the vertices between which there exist an edge\n";
	
	vector<int>adj[v];

	for (int i = 0; i < e; ++i)
	{
		cin>>u>>w;
		adj[u].push_back(w);
		adj[w].push_back(u);
	}
	cout<<"enter the source node: ";
	cin>>source;
	cout<<endl<<"Adjacency list"<<endl;
	for (int i = 0; i < v; ++i)
	{
		cout<<i<<" -> ";
		for (int j = 0; j < adj[i].size(); ++j)
		{
			cout<<adj[i][j]<<" -> ";
		}
		cout<<endl;
	}
	cout<<endl;
	bool visited[v];
	memset(visited,false,sizeof(visited));
	dfs(adj,source,visited);
}