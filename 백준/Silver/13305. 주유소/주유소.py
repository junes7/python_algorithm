import sys
n=int(sys.stdin.readline())
distances=list(map(int,sys.stdin.readline().split()))
prices=list(map(int,sys.stdin.readline().split()))
minprice,money=prices[0],0
for i in range(1,n):
    money+=minprice*distances[i-1]
    if(minprice>=prices[i]):
        minprice=prices[i]
print(money)