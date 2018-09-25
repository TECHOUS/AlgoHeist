/*
 * LINEAR SEARCH
 */
#include <stdio.h>
void linearsearch(int*,int,int);
int main()
{
	int n; //size of the array
	int find; //element to find
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int arr[n];
	register int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to find in the array\n");
	scanf("%d",&find);
	linearsearch(arr,n,find);	
}

void linearsearch(int *array,int m,int f)
{
	register int i;
	int flag=0;
	for(i=0;i<m;i++)
	{
		if(f == array[i])
		{
			flag=1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("Element found\n");
	}
	else if(flag==0)
	{
		printf("No element found\n");
	}
}
