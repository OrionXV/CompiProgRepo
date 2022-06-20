import math
n, mm = input().split()
n = int(n)
mm = int(mm)
y = [int(y) for y in input().split()]
 
if n == len(y):

    avg = sum(y)/n
    if math.modf(avg)[0] == 0.5:
        avg += 0.01
        avg = round(avg)
        print(n*(mm - avg))
    else :
        avg = round(avg)
        print(n*(mm - avg))

