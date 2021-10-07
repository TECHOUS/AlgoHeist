#include <stdio.h>

int partition(int arr[], int low, int high)
{
    int i = low - 1, pivot = arr[high], temp;

    // Partitioning
    for (int j = low; j < high; j++)
    {

        // If current element is smaller than or
        if (arr[j] < pivot)
        {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap pivot with i+1
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

// Main quicksort function
int quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        // Getting pivot element
        int pivot;
        pivot = partition(arr, low, high);

        // Recursive call for sorting left side
        quicksort(arr, low, pivot - 1);

        // Recursive call for sorting right side
        quicksort(arr, pivot + 1, high);
    }
}

int main()
{
    int n;

    // Taking length of array
    printf("Enter array length : ");
    scanf("%d", &n);

    int arr[n];

    // Getting array elements
    printf("Enter array elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calling quicksort function
    quicksort(arr, 0, n - 1);

    // Printing sorted array
    printf("Sorted Array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}