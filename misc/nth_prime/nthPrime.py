
import math as ma

def SieveOfEratosthenes(n):

    m = n
    n = 20*n

    arr = [1]*(n+1)

    ans = []

    for i in range(2, int(ma.sqrt(n)) + 1):
        if arr[i] == 1:
            ans.append(i)
            j = i
            k = i * i
            while k <= n:

                j += 1
                arr[k] = 0
                k = j*i

    for z in range(int(ma.sqrt(n)) + 1, n+1):
        if arr[z] == 1:
            ans.append(z)

    return ans[m - 1]
    

n = int(input())

print(SieveOfEratosthenes(n))
