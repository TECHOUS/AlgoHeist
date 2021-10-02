# prime modulo value
N = 1000000007
      
# Function code 
def exponentiation(bas, exp):
    if (exp == 0):
        return 1
    if (exp == 1):
        return bas % N
      
    t = exponentiation(bas, int(exp / 2))
    t = (t * t) % N
    
    # if exponent is
    # even value
    if (exp % 2 == 0):
        return t
          
    # if exponent is
    # odd value
    else:
        return ((bas % N) * t) % N
  
# Driver code
bas = 5
exp = 100000
  
modulo = exponentiation(bas, exp)
print(modulo)
  