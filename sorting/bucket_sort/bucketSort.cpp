#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
 

void bucketSort(float arr[], int x)
{
     

    vector<float> b[x];
 
 
    for (int i = 0; i < x; i++) {
        int bi = x * arr[i];
        b[bi].push_back(arr[i]);
    }
 

    for (int i = 0; i < x; i++)
        sort(b[i].begin(), b[i].end());
 

    int index = 0;
    for (int i = 0; i < x; i++)
        for (int j = 0; j < b[i].size(); j++)
            arr[index++] = b[i][j];
}
 

int main()
{
    float arr[]
        = { 0.845, 0.455, 0.601, 0.1124, 0.695, 0.3224 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bucketSort(arr, x);
 
    cout << "Sorted array \n";
    for (int i = 0; i < x; i++)
        cout << arr[i] << " ";
    return 0;
}