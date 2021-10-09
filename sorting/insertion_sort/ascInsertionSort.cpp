#include<iostream>
using namespace std;
void display(int a[], int n)
{
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
}
void asc_insertion_sort(int a[], int n)
{
    int i, num, j;
    for (i = 1; i < n; i++)
    {
        num = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > num)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = num;
    }
}
int main()
{
    int a[] = {1,5,7,2,63,79,233,78};
    int n = sizeof(a)/sizeof(a[0]);
    asc_insertion_sort(a,n);
    display(a,n);
}