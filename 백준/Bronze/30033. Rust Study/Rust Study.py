import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
a=[*map(int,input().split())]
b=[*map(int,input().split())]
cnt=0
for i in range(n):
    if a[i]<=b[i]:
        cnt+=1;
print(cnt)