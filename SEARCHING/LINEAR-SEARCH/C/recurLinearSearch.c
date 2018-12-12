#include <stdio.h>
#include <stdbool.h>
bool linearSearch(int arr[],int l,int r,int key)
{   
    if(arr[l]==key)
    {
        return true;
    }
    if(l==r)
    {
        return false;
    }
    bool ans = linearSearch(arr,l+1,r,key);
    if(ans)
    {
        return true;
    }
    return false;
}
int main()
{
    printf("Enter the size of the array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(register int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter the element to find\n");
    scanf("%d",&key);
    bool result = linearSearch(arr,0,n,key);
    if(result)
    {
        printf("Element found!!!\n");
    }
    else
    {
        printf("Element not found\n");
    }
}