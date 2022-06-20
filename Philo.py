import math
m = int(input())
s = input()
def summer(m):
    l = []
    i = 1
    sum = 0
    while i <= m:
        sum = i*(i+1)/2
        if sum > m:
            break
        l.append(int(sum))
        i+=1
    return l
st = ''
l = summer(m)

for i in l:
    st = st + s[i-1]
print(st)