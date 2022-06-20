l = input()
arr = [int(x) for x in input().split()]

m = max(arr)
l = min(arr)
arr.remove(m)
arr.remove(l)
diff = []

if not arr:
    print(0)
else:
    diff.append(max(arr) - l)
    diff.append(m - min(arr))
    print(min(diff))