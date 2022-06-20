import sys
import math

#https://codeforces.com/problemset/problem/158/B
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def get_list(): return list(map(int, sys.stdin.readline().strip().split()))
def findnums(l, x):
    count = 0
    for i in l:
        if x == i:
            count+=1
    return count

n = get_ints()
arr = get_list()
num = []
num.append(findnums(arr, 1))
num.append(findnums(arr, 2))
num.append(findnums(arr, 3))
num.append(findnums(arr, 4))

taxi = sum(num)
 



print(taxi)