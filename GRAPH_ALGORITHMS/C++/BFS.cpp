#include<bits/stdc++.h>
using namespace std;

int bfs(vector<int>adj[], int source,int v) {
	queue<int> q;
	bool boolean[v] = {false};
	boolean[source] = true;
	q.push(source);
	while(q.size()!=0) {
		int vert = q.front();
		cout << vert << "->";
		q.pop();
		for (int i = 0; i < (adj[vert]).size(); ++i)
		{
			if(boolean[adj[vert][i]] == false){
				q.push(adj[vert][i]);
				boolean[adj[vert][i]] = true;
			}
		}
	}
}

int main(){
	int e,v,u,w,source;
	cout << "enter number of edges: ";
	cin >> e;
	cout << "enter number of vertices: ";
	cin >> v;
	cout << "tell the vertices between which there exist an edge\n";
	
	vector<int> adj[v];

	for (int i = 0; i < e; ++i)
	{
		cin >> u >> w;
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
	bfs(adj,source,v);
	cout<<endl;
}