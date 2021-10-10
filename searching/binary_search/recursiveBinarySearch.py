def binarySearch(arr, l, r, x):

    # Check base case
    if r >= l:

        mid = l + (r - l) // 2

        # If ele is present at the middle itself
        if arr[mid] == x:
            return mid

        # If ele is smaller than mid, then present in left
        elif arr[mid] > x:
            return binarySearch(arr, l, mid-1, x)

        # Else the ele present in right
        else:
            return binarySearch(arr, mid + 1, r, x)

    else:
        # Element is not present
        return -1


# Taking array length
n = int(input("Enter length of array : "))

# Taking array elements
arr = list(map(int, input("Enter array elements").split()))

# Taking element to be searched
x = int(input("Enter element to search : "))

# Function call
result = binarySearch(arr, 0, len(arr)-1, x)

if result != -1:
    print("Element is present at index % d" % result)
else:
    print("Element is not present in array")
