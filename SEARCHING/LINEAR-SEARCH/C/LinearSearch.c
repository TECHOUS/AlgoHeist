#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int find;
	int i;
	scanf("%d",&find);
	int flag = 0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==find)
		{
			flag = 1;
			break;	
		}
	}
	if(flag ==0){
	printf("%d index of this",i);
	}
	else
	{
		printf("no element");
	}
		return 0;
}
