#include<bits/stdc++.h>
using namespace std;

int dij(int source, int v, vector<pair<int,int>> adj[]){
	bool boolean[v];
	memset(boolean, false, sizeof(boolean));
	int track[v];
	for (int i = 0; i < v; ++i)
		{
			track[i]=10000;
		}	
		track[source] = 0; 
		set<pair<int,int>> s;
		s.insert(make_pair(0,source));
		while(!s.empty()){
			
			int dis = (*s.begin()).first;
			int vert = (*s.begin()).second;
			s.erase(*s.begin());
			if(boolean[vert])
				continue;
			else
				boolean[vert]=true;
			for (int i = 0; i < adj[vert].size(); ++i)
			{
				if( track[adj[vert][i].first] > track[vert] + adj[vert][i].second ) {
					track[adj[vert][i].first] = track[vert] + adj[vert][i].second;						
					s.insert(make_pair(track[adj[vert][i].first], adj[vert][i].first));
				}
			}
		}
		cout<<endl;
		for (int i = 0; i < v; ++i)
		{
			cout<<track[i]<<" ";
		}
}

int main(){
	int e,v,u,w,source,weight;
	cout << "enter number of edges: ";
	cin >> e;
	cout << "enter number of vertices: ";
	cin >> v;
	cout << "tell the vertices between which there exist an edge and corressponding weights\n";
	
	vector<pair<int,int>> adj[v];

	for (int i = 0; i < e; ++i)
	{
		cin >> u >> w >> weight;
		adj[u].push_back(make_pair(w,weight));
		adj[w].push_back(make_pair(u,weight));
	}
	cout << "enter the source node: ";
	cin >> source;
	cout << endl << "Adjacency list" << endl;
	for (int i = 0; i < v; ++i)
	{
		cout << i << " -> ";
		for (int j = 0; j < adj[i].size(); ++j)
		{
			cout<<adj[i][j].first<<","<<adj[i][j].second<<"->";
		}
		cout << endl;
	}
	cout << endl;

	dij(source,v,adj);	
}