s = int(input())
a = [int(x) for x in input().split()]
b = [int(x) for x in input().split()]

good = 0

for i in range(s):
    for y in range(s):
        y = y + i
        if y < s:
            sa = a[i] + a[y]
            sb = b[i] + b[y]
            if sa > sb:
                good+=1

print(good)