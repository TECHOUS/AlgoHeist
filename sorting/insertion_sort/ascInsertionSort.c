//INSERTION SORT
//FROM RIGHT
//ASCENDING
#include <stdio.h>
void insertionsort(int arr[],int n)
{
    for(register int i=n-2;i>=0;i--)
    {
        int sample = arr[i];//element to insert
        register int j;
        for(j=i;j<n-1 && arr[j+1]<sample;j++)
        {
            arr[j] = arr[j+1];
        }
        arr[j] = sample;
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
    insertionsort(arr,n);
    printf("SORTED ARRAY:\n");
    for(register int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}