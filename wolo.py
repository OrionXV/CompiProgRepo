r, c, d = [int(x) for x in input().split()]
arr = []
for i in range(r):
    p = [int(x) for x in input().split()]
    arr.append(p)
del p 

total = 0

for i in arr:
    total = total + sum(i)

avg = total/r/c
flag = True
if avg - int(avg) != 0:
    print(-1)
else:
    count = 0

    for i in arr:
        if flag:
            for y in i:
                x = (y - avg)/d
                if x != 0:
                    if x - int(x) != 0:
                        count+=1
                    else:
                        print(-1)
                        flag = False
                        break
    if flag:
        print(count)