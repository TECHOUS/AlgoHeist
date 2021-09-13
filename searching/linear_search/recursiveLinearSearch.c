#include <stdio.h>
#include <stdbool.h>

/**
 * This function contains the main logic of recursive linear search algorithm
 * 
 * @param array
 * @param leftIndex
 * @param rightIndex
 * 
 * @return boolean if key element found or not
 **/
bool linearSearch(int array[], int leftIndex, int rightIndex, int key)
{   
    if( array[leftIndex] == key ){                                      // if element is found at this index
        return true;
    }

    if(leftIndex == rightIndex){                                        //  if array traversed upto end
        return false;
    }

    bool ans = linearSearch(array, leftIndex+1 , rightIndex, key);      

    if(ans){
        return true;
    }
    return false;
}

int main()
{
    int size;
    
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    
    int array[size];
    
    printf("Enter the elements of the array\n");
    for(register int i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
    
    int key;
    printf("Enter the element to find\n");
    scanf("%d",&key);
    
    bool result = linearSearch(array, 0, size, key);
    
    if(result){
        printf("Element found!!!\n");
    }else{
        printf("Element not found\n");
    }
}