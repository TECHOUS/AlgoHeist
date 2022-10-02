#include "bits/stdc++.h"
using namespace std;

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void insertsort(int a[],int n){
    for(int i=1;i<n;i++){
        int j=i-1,temp=a[i];
        while(a[j]<temp && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

int main(void){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insertsort(a,n);
    display(a,n);
}
