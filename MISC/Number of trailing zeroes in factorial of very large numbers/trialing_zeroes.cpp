#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	long long int n,num,t;
  cin>>n;
  num = n / 5 ;
  t = num;
  if(num<5)
    cout<<num<<"\n";
  else
  {
    while(t>=5)
    {
      t = t/5;
      num = num+t;
    }
    cout<<num<<"\n";
  }   
  return 0;
  }
