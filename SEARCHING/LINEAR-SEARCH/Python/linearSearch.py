# this function contains the main logic for linear search
def linearSearch(array, find):

    for i in range(len(array)):
        if find == array[i] :
            return i

    return -1


array = list(map(int, input("Enter values in list (space separated) = ").split()))
find = int(input("Enter value to find = "))

index = linearSearch(array, find)

if index == -1 :
    print("value not found")
else:
    print("value found at index", index)
