#include <stdio.h>

/**
 * this function contains the code for the iterative binary search
 * @param array
 * @param leftIndex
 * @param rightIndex
 * @param key
 * 
 * @return int
 **/
int binarysearch(int array[], int leftIndex, int rightIndex, int key)
{
    int index = -1;
    while(leftIndex <= rightIndex)
    {
        int midIndex = (leftIndex+rightIndex) / 2;
        if(array[midIndex] == key)                                      // if element finded at the middle index
        {
            index = midIndex;
            break;
        }
        if(key < array[midIndex])                                       // if element to find is less than the middle element
        {
            rightIndex = midIndex-1;
        }
        else
        {
            leftIndex = midIndex+1;
        }
    }
    return index;
}

int main()
{
    printf("Enter the size of the array\n");
    int size;
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements of array in sorted array\n");
    for(register int i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
    int key;
    printf("Enter the value to find\n");
    scanf("%d", &key);
    int ans = binarysearch(array, 0, size, key);

    if(ans == -1)
    {
        printf("Not found\n");
    }
    else
    {
        printf("Element found at %d\n",ans);
    }
}