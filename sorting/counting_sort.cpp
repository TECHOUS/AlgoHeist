//If there is a number occurring more frequently in an unsorted array, then we use counting sort as sorting technique.

#include<iostream>
using namespace std;
int max_num(int a[],int n)    //finding maximum element
{
  int max=a[0]; 
  for(int i=1;i<n;i++)
  {
    if(a[i]>max)   
      max=a[i];
  }
  return max;
}

void counting_sort(int a[], int n)
{
  int sorted[n+1];  // declaration of sorted array
  int max=max_num(a,n);
  int count[max+1]={0}; //initially assigning count of all elements as zero
  for(int i=0;i<n;i++)
  {
    count[a[i]]++;  //storing count of each element i.e. frequency.
  }
  for(int i=1;i<=max;i++)
  {
    count[i]+=count[i-1];  //storing the cumulative frequency of each element
  }
  for(int i=n-1;i>=0;i--)
  {
   sorted[--count[a[i]]] = a[i]; //placing the elements in their correct position i.e. ascending order
  }
  for(int i=0;i<n;i++)
  {
    cout<<sorted[i]<<" ";
  }
}
int main()
{
  int n;
  cout<<"Enter no. of elements:";
  cin>>n;
  int a[n];
  cout<<"Enter elements:";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"Sorted elements are:\n";
  counting_sort(a,n);
  return 0;
}
