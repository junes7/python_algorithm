import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=sorted([[*map(int,input().split())] for _ in range(n)])
price,cnt=arr[0][1],1
for i in range(1,n):
    if price>arr[i][1]:
        price=arr[i][1]
        cnt+=1
print(cnt)