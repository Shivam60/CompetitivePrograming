n = int(input())
while(n):
    t = list(str(input()))
    ans = 0
    for i in t:
        ans += int(i)
    print(ans)
    n = n-1
