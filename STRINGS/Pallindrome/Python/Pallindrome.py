text = input("Enter a string = ")

print(text, "is", end=" ")
if text != text[::-1] :
    print("not", end=" ")
print("pallindrome")
