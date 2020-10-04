//Binary Search with Recursion in JavaScript

//Returns index of element to find in arr if present, else -1
function binarySearch(arr, left, right, elementToFind) {
    
    //Check base case
    if (left > right) return -1 

    //takes the middle position of the array
    const mid = Math.round(left + (right - left) / 2);

    //If element is present at the middle itself 
    if (arr[mid] === elementToFind) return mid;

    //ignore right half
    if (arr[mid] > elementToFind)
        return binarySearch(arr, left, mid - 1, elementToFind)
    
    //otherwise ignore left half
    else
        return binarySearch(arr, mid + 1, right, elementToFind)
}

(function main() {
    const sortedArray = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
    const elementToFind = 8;
  
    const position = binarySearch(sortedArray, 0, sortedArray.length - 1, elementToFind);
    
    if (position === - 1)
        console.log(`Element is not present`);
    else
        console.log(`Element is present at position ${position}`);
})();