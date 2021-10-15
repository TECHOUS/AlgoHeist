#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100000];
int vis[100000],low[100000],ti[100000];
int timer;
void dfs(int n,int par){
    vis[n]=1;
    ti[n]=low[n]=timer;
    timer++;
    for(auto it: adj[n]){
        if(it==par)continue;
        if(vis[it]==1){
            low[n]=min(ti[it],low[n]);
        }else{
            dfs(it,n);
            if(low[it]>ti[n]){
                cout<<n<<" - "<<it<<endl;
            }
            low[n]=min(low[n],low[it]);
        }     
    }
}
int main(){
    int n,m,x,y;
    cin>>n>>m;
    while(m--){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=0;i<n;i++)
        if(vis[i]==0)dfs(i,-1);
}