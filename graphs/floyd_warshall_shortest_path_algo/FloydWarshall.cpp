// Floyd Warshell algorithm for shortest path in directed graph
// for output,input matrix : inf=>absence of edge, 0=> self loop, path=> row number to column number
#include <iostream>
using namespace std;
#define inf 1000000000

void floyd_w(int input[4][4])
{
    for(int k=0;k<4;k++)
    {
        for(int i =0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                input[i][j]=min(input[i][j],input[i][k]+input[k][j]);
            }
        }
    }
    cout<<"output graph: "<<'\n';
    for(int i =0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(input[i][j]==inf)
                {
                    cout<<"Inf"<<"\t";
                }
                else{
                    cout<<input[i][j]<<"\t";
                }
            }
            cout<<endl;
        }
}

int main(){
    int rows=4,column=4;
    int input_graph[4][4]={
        {0,3,inf,4},
        {8,0,2,inf},
        {5,inf,0,1},
        {2,inf,inf,0}
    };
    cout<<"input graph: "<<'\n';
    for(int i =0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                 if(input_graph[i][j]==inf)
                {
                    cout<<"Inf"<<"\t";
                }
                else{
                    cout<<input_graph[i][j]<<"\t";
                }
            }
            cout<<endl;
        }

    floyd_w(input_graph);
    return 0;
}
