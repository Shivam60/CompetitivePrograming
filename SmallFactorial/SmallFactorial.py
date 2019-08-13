n = int(input())
dp = [0]*1001
dp[1] = 1
for i in range(2, 1001):
    dp[i] = dp[i-1]*i
while(n):
    t = int(input())
    print(dp[t])
    n = n-1
