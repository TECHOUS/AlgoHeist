def linearSearch(arr, find):

    for i in range(len(arr)):
        if find == arr[i] :
            return i

    return -1

arr = list(map(int, input("Enter values in list (space separated) = ").split()))
find = int(input("Enter value to find = "))

loc = linearSearch(arr, find)

if loc == -1 :
    print("value not found")
else:
    print("value found at index", loc)
