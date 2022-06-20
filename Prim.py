from math import sqrt
def isPrime(n):
    prime_flag = 0

    if(n > 1):
        for i in range(2, int(sqrt(n)) + 1):
            if (n % i == 0):
                prime_flag = 1
                break
        if (prime_flag == 0):
            return True
        else:
            return False
    else:
        return False


t = int(input())

for t1 in range(t):
    arr = []
    l = int(input())
    i = 2
    while len(arr) < l:
        if isPrime(i):
            arr.append(i)
        i+=1
    for x in arr:
        print(x, end=' ')
