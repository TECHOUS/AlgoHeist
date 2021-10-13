class BinarySearch {
  
    int binarySearch(int arr[], int l, int r, int x){
        if (r >= l && l<arr.length-1) {
            int mid = l + (r - l) / 2;
 
            // If the element is present at the middle itself
            if (arr[mid] == x)
                return mid;
 
            // If element is smaller than mid
            if (arr[mid] > x)
                return binarySearch(arr, l, mid - 1, x);
 
            // Else the element can only be present in right subarray
            return binarySearch(arr, mid + 1, r, x);
        }
 
        return -1;
    }
 
    public static void main(String args[])
    {
        BinarySearch object = new BinarySearch();
        int arr[] = {2, 3, 4, 10, 40};
        int n = arr.length;
        int x = 10;
        int result= object.binarySearch(arr, 0, n - 1, x);
        if (result == -1)
            System.out.println("Element not present!");
        else
            System.out.println("Element found at index: " + result);
    }
}
