// JavaScript program for Merge Sort

function merge(arr, left, mid, right) {
  var n1 = mid - left + 1;
  var n2 = right - mid;

  // Create temp arrays
  var L = new Array(n1);
  var R = new Array(n2);

  // Copy data to temp arrays L[] and R[]
  for (var i = 0; i < n1; i++) L[i] = arr[left + i];
  for (var j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

  // Merge the temp arrays back into arr[l..r]

  // Initial index of first subarray
  var i = 0;

  // Initial index of second subarray
  var j = 0;

  // Initial index of merged subarray
  var k = left;

  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  // Copy the remaining elements of
  // L[], if there are any
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  // Copy the remaining elements of
  // R[], if there are any
  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

// l is for left index and 
// r is right index of the sub-array
// of arr to be sorted
function mergeSort(arr, l, r) {
  if (l >= r) {
    return; //returns recursively
  }
  var m = l + parseInt((r - l) / 2);
  mergeSort(arr, l, m);
  mergeSort(arr, m + 1, r);
  merge(arr, l, m, r);
}

var arr = [32, 13, 54, 23, 6, 10]; // Declaring an array
var arr_size = arr.length; // Size of array

mergeSort(arr, 0, arr_size - 1); // Sorting

console.log(arr); // Output printed
