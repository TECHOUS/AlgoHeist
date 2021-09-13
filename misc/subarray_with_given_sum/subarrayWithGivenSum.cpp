//find subarray with the given sum
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    int n;
    cout<<"enter size of the array";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    int subsum;
    cout<<"enter required sum";
    cin>>subsum;
    int front=0;
    int end=0;
    int sum=0;
    int i=0;
    while(i<n)
    {
        sum=sum+v[i];
        end=i;
        while(sum>subsum && front<=end)
        {
            sum-=v[front];
            front+=1;    
        }
        if(sum==subsum)
        {
            for(int j= front;j<=end;j++)
            {
                cout<<v[j]<<" ";
            }
            break;
        }
        i++;
    }
    if(i==n)
        cout<<"NOT FOUND";
    return 0;
}
