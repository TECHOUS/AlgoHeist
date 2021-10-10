def trappingWater(ls, n):
    
    left = [1]*n
    right = [1]*n
    left[0] = ls[0]

    # checking max building from left
    for i in range(1,n):
        left[i]  = max(left[i-1],ls[i])
    
    right[n-1] = ls[n-1]

    # checking max building from right
    for i in range(n-2,-1,-1):
        right[i]  = max(right[i+1],ls[i])
    
    # calculating water trapped
    max_water = 0
    for i in range(n):
        max_water += min(left[i],right[i])-ls[i]
    return max_water


def main():
        
    # taking number of buildings
    n=int(input("Enter no of buldings : "))
    
    # taking height of each building
    arr=[int(x) for x in input("Enter height of each building : ").strip().split()]

    # calling main solution
    ans = trappingWater(arr, n)

    # printing output
    print(ans)


# main code starts here
if __name__ == "__main__":
    main()
