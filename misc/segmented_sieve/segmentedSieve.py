import math as ma

def SieveOfEratosthenes(n):
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
    return ans

def SegmentedSieve(l, h):
    
    primes = SieveOfEratosthenes(int(ma.sqrt(h)) + 1)
    vector = [1]*(h - l + 1)

    for x in primes:
        sm = ma.ceil(l/x) * x
        m = sm
        while m <= h:
            vector[m - l] = 0
            m+=x

    ans = []

    for i in range(h-l+1):
        if vector[i] == 1:
            ans.append(l+i)
    return ans

l, h = map(int, input().split())
print(SegmentedSieve(l, h))
