#include<bits/stdc++.h>
using namespace std;

void dfsap(int n,vector<int> adj[],vector<int>&par,vector<int>&dsc,vector<int>&low,vector<bool>&ap){
    int children=0;
    static int timer=0;
    dsc[n]=timer;
    low[n]=timer;
    timer+=1;
    for(auto it : adj[n]){
        if(dsc[it]==-1){
            children++;
            par[it]=n;
            //cout<<n<<"  prev"<<endl;
            dfsap(it,adj,par,dsc,low,ap);
            //cout<<n<<"  after"<<endl;
            low[n]=min(low[n],low[it]);
            if(children>1 && par[n]==-1){
                ap[n]=true;
                //cout<<endl<<ap[n]<<endl;
            }
            //cout<<par[n]<<" "<<low[it]<<" "<<dsc[n]<<endl;
            if(par[n]!=-1&&low[it]>=dsc[n]){
                ap[n]=true;
            }
        }
        else if(it!=par[n]){
            low[n]=min(low[n],dsc[it]);
        }
    }
    
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n]; 
    vector<int> dsc(n,-1),par(n,-1),low(n,-1);   
    vector<bool> ap(n,false);
    while(m--){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        if(dsc[i]==-1){dfsap(i,adj,par,dsc,low,ap);}
    }
    for(int i=0;i<ap.size();i++){
        if(ap[i]==true){
            cout<<"ap : "<<i<<endl;
        }
    }
}