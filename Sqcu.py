import math
t = int(input())

for t1 in range(t):
    r = int(input())
    r = r + 1
    print(int(math.pow(r, 1./2)) + int(math.pow(r, 1./3)) - int(math.pow(r, 1./6)))