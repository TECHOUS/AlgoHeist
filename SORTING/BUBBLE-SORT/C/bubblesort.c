/*
 *  BUBBLE SORT
 *  ASCENDING 
 *  STABLE SORT
*/
#include <stdio.h>
void bubblesort(int arr[],int n)
{
    for(register int i=n-1;i>0;i--)
    {
        for(register int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swapping
                arr[j] = arr[j]^arr[j+1];
                arr[j+1] =arr[j]^arr[j+1];
                arr[j] = arr[j]^arr[j+1];
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of the array\n");
    for(register int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    printf("SORTED ARRAY:\n");
    for(register int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}