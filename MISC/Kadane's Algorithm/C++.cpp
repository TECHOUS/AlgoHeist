//Largest contiguos sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int max_sum=0,curr_sum=0;
    for(int i=0;i<n;i++)
    {
        curr_sum+=arr[i];
        max_sum=max(max_sum,curr_sum);
        //if curr_sum becomes less than 0 then we make curr_sum=0
        if(curr_sum<0)
            curr_sum=0;
    }
    cout<<curr_sum<<endl;

    return 0;
}
