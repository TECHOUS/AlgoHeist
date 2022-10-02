#include "bits/stdc++.h"
using namespace std;

int recursiveBinarySearch(int a[], int num, int left, int right)
{
    int m;
    if (left > right)
    {
        cout << "Number is not found";
        return 0;
    }
    else
    {
        m = (left + right) / 2;
        if (a[m] == num)
        {
            cout << "Number is found at " << m << " index \n";
            return 0;
        }
        else if (num > a[m])
        {
            recursiveBinarySearch(a, num, m + 1, right);
        }
        else if (num < a[m])
        {
            recursiveBinarySearch(a, num, left, m - 1);
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of an array:\n";
    cin >> n;
    int a[n], num, i, left, right;
    cout << "Enter the sorted values \n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter a value to be search \n";
    cin >> num;
    left = 0;
    right = n - 1;
    recursiveBinarySearch(a, num, left, right);
    return 0;
}
