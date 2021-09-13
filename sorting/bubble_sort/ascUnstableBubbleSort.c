//BUBBLE SORT
//ASCENDING ORDER
//UNSTABLE SORT
#include <stdio.h>
void bubblesort(int arr[],int n)
{
    for(register int i=n-1;i>=0;i--)
    {
        for(register int j=0;j<i;j++)
        {
            if(arr[j]>=arr[j+1])
            {
                //swap
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
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
    bubblesort(arr,n);
    printf("The sorted array:\n");
    for(register int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}