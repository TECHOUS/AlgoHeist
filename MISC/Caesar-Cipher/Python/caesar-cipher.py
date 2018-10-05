alpha = 'abcdefghijklmnopqrstuvwxyz'
final = ''
input1 = input("Enter a String")
key = int(input("Enter Value of Key"))
input1 = input1.lower()
for x in input1:
    if(x in alpha):
        pos = alpha.find(x)
        pos = (pos+key)%26
        final+=(alpha[pos])
    else:
        final+=x

print(final)
