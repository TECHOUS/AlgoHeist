//SELECTION SORT
//USING MIN ELEMENT
//DESCENDING SORT
#include <stdio.h>
void selectionsort(int arr[],int n)
{
    int min=0;
    for(register int i=n-1;i>=0;i--)
    {
        min=i;
        for(register int j=0;j<i;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        //swap
        int temp = arr[i];
        arr[i] =arr[min];
        arr[min]=temp;
    }
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
    selectionsort(arr,n);
    for(register int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}