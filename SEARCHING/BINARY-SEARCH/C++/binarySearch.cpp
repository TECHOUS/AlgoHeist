#include <iostream>

using namespace std;

int binarysearch(int arr[], int n, int find){

    int s = 0, mid;

    while( s < n ){

        mid = (s+n)/2;

        if( arr[mid] == find ){
            return mid;
        }
        else if( find < arr[mid] ){
            n = mid;
        }
        else{
            s = mid+1;
        }
    }

    return -1;
}

int main(){

    int n, find, loc;
    cout<<"Enter the size of array = ";
    cin>>n;

    int *arr = new int[n];
    cout<<"Enter " <<n <<" sorted elements in array :\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter value to find = ";
    cin>>find;

    loc = binarysearch(arr, n, find);

    if( loc == -1 ){
        cout<<"value Not found in array";
    }
    else{
        cout<<"value found at index " <<loc <<endl;
    }

    return 0;
}
