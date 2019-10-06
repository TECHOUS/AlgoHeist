# Bubble sort ,Python3

def bubbleSort(arr):
	n = len(arr)
	# iterate through all the elements of the array.
	for i in range(n):
		# The last i elements are already in place.
		for j in range(0, n-i-1):
			# traverse the array from 0 to n-i-1
			# Swap if the element found is greater
			# than the next element
			if arr[j] > arr[j+1] :
				arr[j], arr[j+1] = arr[j+1], arr[j]
# driver Fucntion
arr = [14, 38, 22, 12, 92, 61, 98]
bubbleSort(arr)
print ("The sorted Sorted array is:", arr)
#for i in range(len(arr)):
#:	print ("%d" %arr[i]), 

