import sys
n=int(sys.stdin.readline())
coins,cnt=[5,2],0
if n>coins[0]:
    while n%coins[0]>0:
        n-=coins[1]
        cnt+=1
for coin in coins:
    cnt+=n//coin
    n%=coin
print(cnt if n==0 else -1)