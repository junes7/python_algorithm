import sys
n=int(sys.stdin.readline())
coins=[25,10,5,1]
for i in range(n):
    rem=int(sys.stdin.readline())
    for coin in coins:
        print(rem//coin,end=' ')
        rem%=coin
    print()