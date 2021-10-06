#include<stdio.h>


void merge(int a[],int i1,int j1,int i2,int j2)
{
	int temp[50];
	int i,j,k;
	i=i1;
	j=i2;
	k=0;
	while(i<=j1 && j<=j2)
	{
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}

	while(i<=j1)
		temp[k++]=a[i++];

	while(j<=j2)
		temp[k++]=a[j++];

	for(i=i1,j=0;i<=j2;i++,j++)
		a[i]=temp[j];
}


void mergesort(int a[],int lb,int ub)
{
	// checking if start is less then high
	int mid;
	if(lb<ub)
	{
		// calling recursive function
		mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,mid+1,ub);
	}
}

int main()
{
	int n,i;

	//taking array size
	printf("Enter no of elements : ");
	scanf("%d",&n);
    int arr[n];

	//taking array elements
	printf("Enter array elements : ");
	for(i=0;i<n;i++)
    {
		scanf("%d",&arr[i]);
    }

	// Calling merge sort function
	mergesort(arr,0,n-1);

	// printing sorted arrat
	printf("\nSorted array is : ");
	for(i=0;i<n;i++)
    {
		printf("%d ",arr[i]);
    }
	return 0;
}
