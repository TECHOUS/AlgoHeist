# DYNAMIC PROGRAMMING [MAXIMUM SUM OF NON ADJACENT ELEMENT]        {without recursion}   
# TABULATION


lst = []
n = int(input('enter no. of element '))
for i in range( 0 , n):
    ele =  int(input())
    lst.append(ele)
        
print(lst)

inc = lst[0]
exc = 0

for i in range(1 , n):
    ninc = exc + lst[i]
    nexc = max(inc , exc)
    inc = ninc
    exc = nexc
    
print(max(inc , exc))