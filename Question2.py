rows, cols = (5, 5)
arr = [[int(x) for x in input().split()] for i in range(rows)]
for i in range(5):
    for j in range(5):
        if(arr[i][j]==1):
            print(str(abs(i-2)+abs(j-2)))
            break