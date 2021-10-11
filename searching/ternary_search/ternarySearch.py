import math as mt

def ternarySearch(left, right, key, ar):
    """
    Recursive function to perform Ternary Search
    """
    if (right >= left):
        # Find the mid1 and mid2
        mid1 = left + (right - left) //3
        mid2 = right - (right - left) //3

        # Check if key is present at any mid
        if (ar[mid1] == key):
            return mid1

        if (ar[mid2] == key):
            return mid2

        if (key < ar[mid1]):
            # The key lies in between left and mid1
            return ternarySearch(left, mid1 - 1, key, ar)

        elif (key > ar[mid2]):
            # The key lies in between mid2 and right
            return ternarySearch(mid2 + 1, right, key, ar)

        else:
            # The key lies in between mid1 and mid2
            return ternarySearch(mid1 + 1,
                                 mid2 - 1, key, ar)

    # Key not found
    return -1
