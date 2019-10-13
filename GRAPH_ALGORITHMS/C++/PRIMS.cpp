#include<iostream>
#define SIZE 20
#define MAX 6555
using namespace std;
int **G;
void Prim(int node)
{
    int visited[SIZE],i,j,k;
    int min_dist,v1,v2,total=0;
    int nearest[SIZE],mindist[SIZE];
    for(i=1;i<node;i++)
    {
        nearest[i]=0;
        mindist[i]=G[0][i];
        visited[i]=0;
    }
    visited[0]=1;
    for(i=0;i<node-1;i++)
    {
    min_dist=MAX;
    for(j=1;j<node;j++)
    {
        if(mindist[j]>0 && mindist[j]<min_dist)
        {
            min_dist=mindist[j];
            k=j;
        }
    }
    cout<<"Edge ("<<nearest[k]+1<<" , "<<k+1<<") is selected :"<<min_dist;
    cout<<"\n";
    total=total+min_dist;
    mindist[k]=-1;
    visited[k]=1;
    for(j=1;j<node;j++)
    {
        if(G[j][k]<mindist[j] && visited[j]==0)
        {
            mindist[j]=G[j][k];
            nearest[j]=k;
        }
        if(mindist[j]==0 && G[j][k]!=0)
        {
            mindist[j]=G[j][k];
            nearest[j]=k;
        }
    }
    }
    cout<<"\n\n\t Total Path Length Is:"<<total;
}
int main()
{
    int nodes;
    int v1,v2,length,i,j,n;
    cout<<"\nEnter the number of Nodes in the Graph:";
    cin>>nodes;
    cout<<"\nEnter the number of Edges in the Graph:";
    cin>>n;

    G = new int*[nodes];
    for(i=0;i<nodes;i++)
    {
        G[i] = new int[nodes];
    }

    for(i=0;i<nodes;i++)
    {
        for(j=0;j<nodes;j++)
        G[i][j]=0;
    }
    cout<<"\nEnter Edges and Weights in order as (V1 V2 W)\n";
    for(i=0;i<n;i++)
    {
        cin>>v1>>v2;
        cin>>length;
        G[v1-1][v2-1]=length;
        G[v2-1][v1-1]=length;
    }
    cout<<"\n";
    Prim(nodes);
    return 0;
}
