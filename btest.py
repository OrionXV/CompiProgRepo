import numpy as np
import sys
def get_list(): return list(map(int, sys.stdin.readline().strip().split()))
arr = np.array(get_list())
sor = np.sort(arr)
x = int(input("\nEnter a Number to be searched\n"))
print("Sorted array\n", sor)
def binarysearch(l, low, high, n):
    if high >= low:
        mid = (low+high)//2
        if l[mid] == n:
            return mid
        elif l[mid] > n:
            return binarysearch(l, low, mid-1, n)
        elif l[mid] < n:
            return binarysearch(l, mid+1, high, n)
    else:
        return -1

print(binarysearch(sor, 0, len(sor)-1, x))

