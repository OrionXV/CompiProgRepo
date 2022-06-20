
t = int(input())
if 1<= t <= 20:
    for x in range(t):
        a,b = input().split()
        a = int(a)
        b = int(b)
        if 0 <= a <= 100 and 0 <= b <= 100 and (a + b) > 0:
            if b == 0:
                print("Solid")
            elif a == 0:
                print("Liquid")
            else:
                print("Solution")

