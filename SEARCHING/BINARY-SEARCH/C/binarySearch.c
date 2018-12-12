#include <stdio.h>
//binary search
int binarySearch(int arr[],int l,int r,int key)
{
    if(l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]<key)
        {
            int ans = binarySearch(arr,mid+1,r,key);
            return ans;
        }
        else
        {
            int ans = binarySearch(arr,l,mid-1,key);
            return ans;
        }
    }
    return -1;
}
int main()
{
    printf("Enter the size of the array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array in sorted order\n");
    for(register int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to find\n");
    int key;
    scanf("%d",&key);
    int index = binarySearch(arr,0,n,key);
    
    if(index==-1)
    {
        printf("Not found!!!\n");
    }
    else
    {
        printf("Found at %d index\n",index);
    }
}