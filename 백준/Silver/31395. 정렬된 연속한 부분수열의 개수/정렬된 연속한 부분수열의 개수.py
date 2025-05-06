import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(int,input().split())]
res=[1]*n
for i in range(1,n):
    if arr[i-1]<arr[i]:
        res[i]=res[i-1]+1
print(sum(res))