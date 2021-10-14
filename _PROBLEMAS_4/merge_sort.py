import time


"""Insertion Sort"""
def InsertionSort(A):
    for i in range(1, len(A)):
        cur_value = A[i]
        j = i - 1
        while j >= 0 and A[j] > cur_value:
            A[j+1] = A[j]
            j -= 1
        A[j+1] = cur_value

"""Merge Sort"""
def merge_sort(A):
    tam = len(A)

    if tam == 1:
        return A

    mid = tam // 2
    l = merge_sort(A[:mid])
    r = merge_sort(A[mid:])

    return merge(l, r)

def merge(l, r): 
    C = []
    i = j = 0

    while(i < len(l) and j < len(r)):
        if l[i] < r[j]:
            C.append(l[i])
            i += 1
        else:
            C.append(r[j])
            j += 1

    C.extend(l[i:])
    C.extend(r[j:])

    return C

"""Analasis graficas"""
A = [6,4,8,532,342,672]
print(A)
A = merge_sort(A)
print(A)