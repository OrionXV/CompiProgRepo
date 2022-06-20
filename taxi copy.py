import sys
import math

#https://codeforces.com/problemset/problem/158/B
def get_ints(): return map(int, sys.stdin.readline().strip().split())
def get_list(): return list(map(int, sys.stdin.readline().strip().split()))

def numfinder(x):
    return x/4
    
n = get_ints()
arr = get_list()

taxi = math.ceil(sum(list(map(numfinder, arr))))

print(taxi)