//INSERTION SORT
//USING MAX ELEMENT
//DESCENDING
#include <stdio.h>
void selectionsort(int arr[],int n)
{
    for(register int i=0;i<n;i++)
    {
        int max=i;//max index
        for(register int j=i;j<n;j++)
        {
            if(arr[max]<arr[j])
            {
                max=j;
            }
        }
        //swap
        int temp =arr[i];
        arr[i] = arr[max];
        arr[max]=temp;
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