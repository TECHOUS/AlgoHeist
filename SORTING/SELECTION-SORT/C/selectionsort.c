//SELECTION SORT
//USING MIN ELEMENT
//ASCENDING
#include <stdio.h>
void selectionsort(int arr[],int n)
{
  int min=0;
  for(register int i=0;i<n;i++)
  {
    min=i;
    for(register int j=i;j<n;j++)
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
  printf("Sorted array:\n");
  for(register int i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}