from itertools import permutations
import sys
def get_ints(): return map(int, sys.stdin.readline().strip().split())

def perCor(per, a, b):
    a1, b1 = 0, 0 

    for i, x in enumerate(per, 1):
        if i != len(per)-1:
            if (per[i-1] < x) and (x > per[i+1]):
                a1+=1
            if (per[i-1] > x) and (x < per[i+1]):
                b1+=1
    if a1 == a and b1 == b:
        return per
    return [-1]

t = int(input())
for t1 in range (t):
    n, a, b = get_ints()
    perm = list(permutations([x for x in range(n)]))
    per = perCor(perm, a, b)
    if per[0] != -1:
        for x in per:
            print(x, end=' ')
    else:
        print(-1)
             
