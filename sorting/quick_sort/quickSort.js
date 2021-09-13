/* Javascript implementation of QuickSort */

/**
 * This function takes last element as pivot, places
 * the pivot element at its correct position in sorted
 * array, and places all smaller to left of pivot and all greater elements to right
 * of pivot
 * @param arr
 * @param low
 * @param high
 * @return int
 **/
const partition = (arr, low, high) => {
  const pivot = arr[high];
  let i = low - 1,
    j = low;
  for (j = low; j <= high - 1; j++) {
    if (arr[j] < pivot) {
      i++;
      [arr[i], arr[j]] = [arr[j], arr[i]];
    }
  }
  [arr[i + 1], arr[high]] = [arr[high], arr[i + 1]];
  return i + 1;
};

/**
 * The main function that implements QuickSort
 * @param arr
 * @param low
 * @param high
 **/
const quickSort = (arr, low, high) => {
  if (low < high) {
    let pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
  return arr;
};

(function main() {
  const unsortedArray = [6, 23, -2, 98, 45, 221, 1, 46, 9, 3, 4, 6];
  console.log(`unsortedArray: ${unsortedArray}`);

  const sortedArray = quickSort(unsortedArray, 0, unsortedArray.length - 1);
  console.log(`sortedArray: ${sortedArray}`);
})();
