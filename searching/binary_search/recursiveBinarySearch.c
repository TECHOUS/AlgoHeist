#include <stdio.h>

/**
 * this function contains the logic for recursive binary search
 * 
 * @param array
 * @param leftIndex
 * @param rightIndex
 * @param key
 * 
 * @return int
 **/
int binarySearch(int array[], int leftIndex, int rightIndex, int key)
{
    if(leftIndex <= rightIndex)
    {
        int midIndex = (leftIndex + rightIndex) / 2;
        if(array[midIndex] == key)
        {
            return midIndex;
        }
        if(array[midIndex] < key)
        {
            int ans = binarySearch(array, midIndex+1, rightIndex, key);
            return ans;
        }
        else
        {
            int ans = binarySearch(array, leftIndex, midIndex-1, key);
            return ans;
        }
    }
    return -1;
}

int main()
{
    printf("Enter the size of the array\n");
    int size;
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements of the array in sorted order\n");
    for(register int i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the element to find\n");
    int key;
    scanf("%d", &key);
    int index = binarySearch(array, 0, size, key);
    
    if(index==-1)
    {
        printf("Not found!!!\n");
    }
    else
    {
        printf("Found at %d index\n",index);
    }
}