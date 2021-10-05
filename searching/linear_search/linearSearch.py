def linear_search(arr, key):
    for j in range(len(arr)):
        if (arr[j] == key):
            return j
    return -1

 
my_list = [1, 3, 5, 7, 9]
k = 7

result = linear_search(my_list, k)

if(result == -1):
    print("Couldn't find the specified element")
else:
    print("Element found at index: ", result)
