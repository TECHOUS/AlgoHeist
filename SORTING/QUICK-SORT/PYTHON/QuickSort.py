def quicksort(li):
    if len(li) == 1 or len(li) == 0:
        return li
    else:
        pivot = li[0]
        i = 0
        for j in range(len(li)-1):
            if li[j+1] < pivot:
                li[j+1],li[i+1] = li[i+1], li[j+1]
                i += 1
        li[0],li[i] = li[i],li[0]
        first_part = quicksort(li[:i])
        second_part = quicksort(li[i+1:])
        first_part.append(li[i])
        return first_part + second_part

bef = [12,54,23,78,120,3423,342]
new = quicksort(bef)

print bef
print new
