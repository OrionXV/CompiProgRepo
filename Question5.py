t=int(input())
if 1<=t<=100:
    a=list
    while t!=0:
        n,k = input().split()
        k=int(k)
        n=int(n)
        if 1<=n<=2*10**5 and 1<=k<=10**18:
            a=[int(x) for x in input().split()]
            while k!=0:
                d=max(a)
                for i in range(n):
                    a[i]=d-a[i]
                k=k-1
            print(*a)
            t-=1 