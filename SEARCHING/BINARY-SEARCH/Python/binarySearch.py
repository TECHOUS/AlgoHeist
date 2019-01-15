def binarySearch(arr, find):

    s = 0
    e = len(arr)

    while( s < e ):

        mid = (s+e)//2

        if arr[mid] == find :
            return mid
        elif find < arr[mid] :
            e = mid
        else:
            s = mid+1

    return -1

arr = list(map(int, input("Enter sorted values in list (space separated) = ").split()))
find = int(input("Enter value to find = "))

loc = binarySearch(arr, find)

if loc == -1 :
    print("value not found")
else:
    print("value found at index", loc)
