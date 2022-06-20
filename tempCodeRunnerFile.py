import math
x = [int(x) for x in input().split()]
y = [int(y) for y in input().split()]
avg = sum(y)/len(y)
print(len(y)*math.ceil((x[1] - avg)))