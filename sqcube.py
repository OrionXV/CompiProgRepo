t = int(input())

def isSquare(x):
    if(x >= 0):
        sr = x**(1./2)
        return (sr*sr == float(x))
    return False

def isCube(x):
    if x>=0:
        cr = x**(1./3)
        return ((cr*cr*cr) == float(x))
    return False
def isBoth(x):
    if x>=0:
        cs = x**(1./6)
        return((x*x*x*x*x*x) == float(x))
    return False
for t1 in range(t):
    r = int(input())
    count = 0
    for x in reversed(range(r)):
        if(isSquare(x)):
            csr = x**(1./2)
            break
    for x in reversed(range(r)):
        if(isCube(x)):
            ccr = x**(1./3)
            break
    for x in reversed(range(r)):
        if isBoth(x):
            ccsr = x**(1./6) 
            break
    print(int(csr+ccr-ccsr))