import sys 
def get_int(): return map(int, sys.stdin.readline().strip().split())

def mea(x, y, z):
    return abs(x + z - 2*y)%3

t = int(input())
for i in range(t):
    x, y, z = get_int()
    print(mea(x, y, z))