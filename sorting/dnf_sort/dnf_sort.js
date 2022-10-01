function sort012(a, arr_size) {
  let lo = 0;
  let hi = arr_size - 1;
  let mid = 0;
  let temp = 0;
  // Iterate till all the elements
  // are sorted
  while (mid <= hi) {
    // If the element is 0
    if (a[mid] == 0) {
      temp = a[lo];
      a[lo] = a[mid];
      a[mid] = temp;
      lo++;
      mid++;
    }
    // If the element is 1
    else if (a[mid] == 1) {
      mid++;
    }
    // If the element is 2
    else {
      temp = a[mid];
      a[mid] = a[hi];
      a[hi] = temp;
      hi--;
    }
  }
}

/*Driver function to check for above functions*/
let arr = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1];

let arr_size = arr.length;
sort012(arr, arr_size);
console.log(arr);
