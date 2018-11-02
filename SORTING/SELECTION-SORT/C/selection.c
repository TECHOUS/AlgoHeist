//SELECTION SORT
//UNSTABLE
//ASCENDING
//using max element
#include <stdio.h>
void selectionsort(int arr[],int n)
{
    for(register int i=n-1;i>0;i--)
    {
        int max=0;
        for(register int j=0;j<=i;j++)
        {
            if(arr[max]<arr[j])
            {
                max=j;
            }
            //swap
            int temp=arr[i];
            arr[i]=arr[max];
            arr[max]=temp;
        }
    }
}
int main()
{
    printf("Enter the size of the array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(register int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    printf("Sorted array:\n");
    for(register int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}