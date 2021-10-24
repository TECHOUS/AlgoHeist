#This Algorithm is Used to Solve the minimum number of coins, Change Problem.
def dp_change(coins, amt):

    min_coins = dict()
    min_coins[0] = 0

    for m in range(1, amt+1):

        min_coins[m] = 9999 #Taking 9999 as an arbitary large value. 

        for i in coins:
            if m >= i:
                num_coins = min_coins[m-i] + 1

                min_coins[m] = min(num_coins, min_coins[m])

    return min_coins[amt]

if __name__ == "__main__":

    amt = int(input())                          #Taking Integer input for the amount
    coins = [int(i) for i in input().split()]   #Taking Array input for the coins

    print(dp_change(coins, amt))