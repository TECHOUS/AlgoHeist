#include<iostream>
using namespace std;
int maxSumOfSubarray(int a[], int n)
{
  int sum=0,maxSum=0;
	
	for(int i=0;i<n;i++)
	{

		if(sum>=0)
		{
			sum+=a[i];
			if(sum>=maxSum)
			{
				maxSum=sum;
			}	
		}
		if(sum<0)
		{
			sum=0;     //since aim is to find maximum sum, we ignore the negative value and consider them as zero.
		}
    
	}
  return maxSum;
}
int main()
{
  int n;
  cout<<"Enter number of elements:";
  cin>>n;
  int a[n];
  cout<<"Elements are:";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"Maximum sum of subarray is:"<<maxSumOfSubarray(a,n);
}
