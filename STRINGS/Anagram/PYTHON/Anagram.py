
str1 = input("Enter string 1 = ")
str2 = input("Enter string 2 = ")

print(str1, "&", str2, "are", end=" ")
if sorted(str1) != sorted(str2) :
    print("not", end=" ")
print("anagrams")
