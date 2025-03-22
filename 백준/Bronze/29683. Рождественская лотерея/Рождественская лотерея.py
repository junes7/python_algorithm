import sys
input=lambda:sys.stdin.readline().rstrip()
n,A=map(int,input().split())
arr=[*map(int,input().split())]
cnt=0
for i in range(n):
    cnt+=arr[i]//A
print(cnt)