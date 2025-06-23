import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
m=int(input())
cnt=0
arr=[*map(int,input().split())]
for i in range(n):
    for j in range(i+1,n):
        if arr[i]+arr[j]==m:
            cnt+=1
print(cnt)