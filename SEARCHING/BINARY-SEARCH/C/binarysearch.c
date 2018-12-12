#include <stdio.h>
int binarysearch(int arr[],int l,int r,int key)
{
    int index=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==key)
        {
            index=mid;
            break;
        }
        if(key<arr[mid])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return index;
}
int main()
{
    printf("Enter the size of the array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array in sorted array\n");
    for(register int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter the value to find\n");
    scanf("%d",&key);
    int ans = binarysearch(arr,0,n,key);

    if(ans==-1)
    {
        printf("Not found\n");
    }
    else
    {
        printf("Element found at %d\n",ans);
    }
}