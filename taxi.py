import sys
import math

#https://codeforces.com/problemset/problem/158/B
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def get_list(): return list(map(int, sys.stdin.readline().strip().split()))
'''
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
'''
def firstIndexof(l, x):
    if not l:
        return -1
    flag = False
    for i in range(len(l)):
        if i == x:
            flag = True
            return i
    if flag == False:
        return -1
    

n = get_ints()
arr = get_list()
arr.sort()

num4 = firstIndexof(arr, 4) #binarysearch(arr, 0, len(arr)-1, 4)
if num4 != -1:
    num4 = len(arr) - num4
    arr = arr[num4:] 
else: 
    num4 = 0

num3 = firstIndexof(arr, 3) #binarysearch(arr, 0, len(arr)-1, 3)
if num3 != -1:
    num3 = len(arr) - num3
    arr = arr[num3:] 
else: 
    num3 = 0

num2 = firstIndexof(arr, 2) #binarysearch(arr, 0, len(arr)-1, 2)
if num2 != -1:
    num2 = len(arr) - num2
    arr = arr[num2:] 
else: 
    num2 = 0

num1 = firstIndexof(arr, 1) #binarysearch(arr, 0, len(arr)-1, 1)
if num1 != -1:
    num1 = len(arr) - num1
    arr = arr[num1:] 
else: 
    num1 = 0

taxi = math.ceil(sum([num4, num3*0.75, num2*0.5, num1*0.25]))

print(taxi)