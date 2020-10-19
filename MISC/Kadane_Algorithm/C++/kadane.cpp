// Kadane's Algorithm is used to find maximum subarray sum in an array 
#include<iostream>
#include<vector>

using namespace std;

int kadane(vector<int> a)
{
    int n = a.size(), sum = 0, best = 0;
    for(int i = 0; i < n; i++)
    {
        sum = max(a[i] , sum + a[i]);
        best = max(sum , best) ;
    }
    return best ;
}

int main()
{
    int n ;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the " << n << " elements : ";
    vector<int> a(n);
    for(int &x : a)
        cin >> x;
    
    int max_subarray_sum = kadane(a);
    cout << max_subarray_sum << endl; 
    return 0 ;
}