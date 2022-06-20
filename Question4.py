x=int(input())
s=0
i=5
if 1<=x<=1000000:
    while i!=0:
        s=int(s+x/i)
        x=int(x%i)
        i-=1
print(str(s))