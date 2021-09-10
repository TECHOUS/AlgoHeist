x = [int(i) for i in input().split()]
# enter numbers with spaces
# Ex: 1 2 3 4 5
# x = [1,2,3,4,5]
print("Original array:")
print(x)
# Ascending order
for i in range(len(x)-1,-1,-1):
    for j in range(i):
        if(x[j]>x[j+1]):
            x[j],x[j+1] = x[j+1],x[j]
print("Sorted array(ascending):")
print(x)
