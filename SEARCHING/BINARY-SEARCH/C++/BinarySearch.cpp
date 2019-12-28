#include<iostream>
using namespace std;

//Function to sort the array
void sort(int arr[],int size){
   for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    //Displaying the sorted array
    cout<<"Sorted array: "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }

}

//Function to search the element in an array using binary search
void binary_search(int arr[],int size,int search){
    int s=0,mid=0,e=0;
    e=size-1;
    mid = (s+e)/2;
    while(s<e && arr[mid]!=search)
    {
        if(search>arr[mid])
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        mid = (s+e)/2;
    }
    if(arr[mid] == search)
    {
        cout<<"Element "<<arr[mid]<<" found at "<<mid+1<<" position"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
}
int main()
{
    int size,arr[100],search,mid=0;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements of array: \n";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    sort(arr,size); //called a sort function
    cout<<"Enter a no to search: ";
    cin>>search;
    binary_search(arr,size,search);//called a binary search function
    return 0;
}
