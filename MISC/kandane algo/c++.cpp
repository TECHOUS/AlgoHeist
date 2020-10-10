//subarray with highest sum
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
    int max_till_here=0;
    int max_so_far=INT_MIN;
    for(int i=0;i<n;i++)
    {
        max_till_here=max_till_here+v[i];
        max_till_here=max(max_till_here,v[i]);
        max_so_far=max(max_so_far,max_till_here);
    }
    cout<<"max:"<<max_so_far;
}
