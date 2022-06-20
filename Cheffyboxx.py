import math
t = int(input())
if 1 <= t <= 100:
    for x in range(t):
        a, b, c, d = [float(y) for y in input().split()]
        if 1 <= a <= b <= c <= d <= 100:
            if a + b + c <= d:
                print(1)
            elif a + c <= d:
                print(2)
            elif a + b <= d:
                print(2)
            else:
                print(3)