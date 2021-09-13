// C++ program to implement recursive Binary Search
#include <iostream>
using namespace std;

// An iterative binary search function. It returns
// location of key in given array arr[l..r] if present,
// otherwise -1
int binarySearch(int array[], int leftIndex, int rightIndex, int key)
{
	while (leftIndex<= rightIndex) {
		int mid = leftIndex+ (rightIndex- leftIndex) / 2;

		// Check if key is present at mid
		if (array[mid] == key)
			return mid;

		// If keygreater, ignore left half
		if (array[mid] < key)
			leftIndex= mid + 1;

		// If key is smaller, ignore right half
		else
			rightIndex= mid - 1;
	}

	// if we reach here, then element was
	// not present
	return -1;
}

int main()
{
	int array[] = { 2, 3, 4, 10, 40 };
	int key = 10;
	int array_size = sizeof(array) / sizeof(array[0]);
	int result = binarySearch(array, 0, array_size - 1, key);
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at indekey" << result;
	return 0;
}
