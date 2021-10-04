#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int j, k;
        for (j = k = i; j < n; j++)
        {
            if (arr[j] < arr[k])
            {
                k = j;
            }
            swap(arr[i], arr[k]);
        }
    }
}
int main()
{
    int arr[] = {3, 5, 27, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}