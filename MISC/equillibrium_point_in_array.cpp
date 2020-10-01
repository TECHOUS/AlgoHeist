//find the equillibrium point in an array where the leftsum==right sum
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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+v[i];
    }
    int sumst=0;
    for(int i=0;i<n;i++)
    {
        sum-=v[i];
        
        if(sum==sumst)
        {
            cout<<"index at "<<i;
            break;
        }    
        sumst+=v[i];

    }
    return 0;
}