#include<iostream>
using namespace std;
int main()
{
    int n,a[100],x,mid=0,s=0,e=0;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements of array: \n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<"Sorted array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    e = n-1;
    cout<<"Enter a no to search: ";
    cin>>x;
    mid = (s+e)/2;
    while(s<e && a[mid]!=x)
    {
        if(x>a[mid])
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        mid = (s+e)/2;
    }
    if(a[mid] == x)
    {
        cout<<"Element "<<a[mid]<<" found at "<<mid+1<<" position"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}
