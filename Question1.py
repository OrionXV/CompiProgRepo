a,b=input().split()
a=int(a)
b=int(b)
if(1<=a<=100 and 1<=b<=100):
    if a>b:
        print(str(b) + " " + str(int((a-b)/2)))
    else:
        print(str(a) + " " + str(int((b-a)/2)))