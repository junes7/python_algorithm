import sys
n=int(sys.stdin.readline())
rem,cnt=1000-n,0
coins=[500,100,50,10,5,1]
for coin in coins:
    cnt+=rem//coin
    rem%=coin
print(cnt)