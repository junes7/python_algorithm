import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(int,input().split())]
maxn=0
for i in range(n):
    cnt=0
    for j in range(i+1,n):
        if arr[j]>arr[i]:
            break
        cnt+=1
    if maxn<cnt:
        maxn=cnt
print(maxn)