#include<iostream>
#include<vector>
using namespace std;
 int ternary_search(vector<int>v,int left,int right,int key)
 {
   while(right>=left)
   {
     int mid1=left+(right-left)/3;  //finding mid1;
     int mid2=right-(right-left)/3; //finding mid2. there are two mid in ternary search.
     
     if(v[mid1]==key)
     {
       return mid1;
     }
     if(v[mid2]==key)
     {
      return mid2;
     }
     if(key<v[mid1])
     {
       right=mid1-1;
     }
     else if(key<v[mid1] && key>v[mid2])
     {
       left=mid1+1;
       right=mid2-1;
     }
     else
     {
       left=mid2+1;
     }
   }
   return -1;
 }

int main()
{
    int n; 
    vector<int>a; 
    cout<<"Enter the number of elements : ";  cin>>n;  
    cout<<"Enter the elements : \n"; 
     for(int i=0;i<n;i++){  
     int key; 
     cin>>key; 
     a.push_back(key); //inserting elements in vector.
    } 
  cout<<"\nEnter the key Element "; 
   int key;  cin>>key;  
   int index=ternary_search(a,0,n-1,key);
   if(index!=-1)
    cout<<"Key is present at index : "<<index;
   else
     cout<<"Element Not Found.";
    return 0; 
}
