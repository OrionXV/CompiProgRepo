import sys
import math
def get_ints(): return map(int, sys.stdin.readline().strip().split())
m, n, a = get_ints()
number = math.ceil(m/a) * math.ceil(n/a)
print(number)