#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>adj[n];
    int a,b,wt;
    for(int i=0;i<m;i++){
        cin>>a>>b>>wt;
        adj[a].push_back(make_pair(b,wt));
        adj[b].push_back(make_pair(a,wt));
    }
    int parent[n];
    int key[n];
    bool mstset[n];
    for(int i=0;i<n;i++){
        key[i]=INT_MAX;
        mstset[i]=false;
        parent[i]=-1;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    key[0]=0;
    // parent[0]=-1;
    int ans=0;
    pq.push({0,0});
    while(!pq.empty()){
        int node=pq.top().second;
        mstset[node]=true;
        
        pq.pop();
        for(auto it:adj[node]){
            int wt=it.second;
            int vtx=it.first;
            if(!mstset[vtx] && key[vtx]>wt){
                key[vtx]=wt;
                parent[vtx]=node;
                pq.push({key[vtx],vtx});
                ans+=wt;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<i<<parent[i]<<" ";
    }
    return 0;
}
