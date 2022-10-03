#include<iostream>
using namespace std;

void subarray_sum(int a[], int n, int target)
{
  int sum=0,startIndex,endIndex;
  bool breakOuterLoop=false;
  for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			startIndex=i;
			sum+=a[j];
		    if(sum==target)
		    {
		    	endIndex=j;
		    	cout<<"Subarray is:";
		    	for(int k=startIndex;k<=endIndex;k++)
		    	{
		    		cout<<a[k]<<" ";
				}
		    	sum=0;
          breakOuterLoop=true;    // if sum of subarray equal to given value then it breaks the loop.
		    	break;
			}
				
		}
		sum=0;
		if(breakOuterLoop)
			break;
	}
}
int main()
{
  int n,given_sum;
  cout<<"Enter no. of input:";cin>>n;
  int a[n];
  cout<<"Elements are:";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
 cout<<"Enter the sum of elements";
  cin>>given_sum;
  subarray_sum(a,n,given_sum);
  return 0;
}
