t = int(input())

for t1 in range(t):
    s = input()
    l = len(s)
    if l%2 == 0:
        l = l//2
        s1 = s[:l]
        s2 = s[l:]
        if s1 == s2:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
