t = int(input())

for t1 in range(t):
    arr = ['11']
    l = int(input())
    s = '1'
    i = 0
    while len(arr) < l:
        arr.append(arr[i]+s)
        i+=1
    for x in arr:
        print(x, end=' ')
