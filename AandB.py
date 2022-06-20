import sys
import math
def get_list(): return list(map(int, sys.stdin.readline().strip().split()))
t = int(input())

for t1 in range(t):
    num = sys.stdin.readline().strip().split()
    l = []
    for n in num:
        l.append(int(n))
    if l[-1] == min(l):
        tempMi = l.index(min(l))
        tempMa =  l.index(max(l))
        temp = l[tempMi]
        l[tempMi] = l[tempMa]
        l[tempMa] = temp
    l.pop()
    print(min(l))
        
        