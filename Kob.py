n, k = input().split()
def rev(x):
  return x[::-1]
nr = rev(n)
k = int(k)
zCount, rCount = 0, -1
for i in range(len(nr)):
    if int(nr[i-1]) == 0:
        zCount +=1
    else :
        nr = nr[:i-1] + nr[i:]
        rCount +=1
    if zCount == k:
        break

print(rCount)    
    


