def binarySearch(array, findElement):

    startIndex = 0
    endIndex = len(array)

    while( startIndex < endIndex ):

        midIndex = (startIndex+endIndex)//2

        if array[midIndex] == findElement :
            return midIndex
        elif findElement < array[midIndex] :
            endIndex = midIndex
        else:
            startIndex = midIndex+1

    return -1

array = list(map(int, input("Enter sorted values in list (space separated) = ").split()))
findElement = int(input("Enter value to find = "))

index = binarySearch(array, findElement)

if index == -1 :
    print("value not found")
else:
    print("value found at index", index)
