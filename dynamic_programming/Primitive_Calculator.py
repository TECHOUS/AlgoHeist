#this is the dynamic programming approach to solve the Primitive Calculator Problem. 
def primitive_calc(n):
    table = dict()
    table[1] = 0

    for i in range(2, n+1):
        
        min1 = table[i-1]+1

        if i%2 == 0:
            min2 = table[i//2]+1
        else:
            min2 = 999999 #here 999999 is an arbitary large integer. 

        if i%3 == 0:
            min3 = table[i//3]+1
        else:
            min3 = 999999 

        table[i] = min(min1, min2, min3)   

    return table[n]


if __name__ == "__main__":
    n = int(input())
    no_steps = primitive_calc(n)

    print(no_steps)