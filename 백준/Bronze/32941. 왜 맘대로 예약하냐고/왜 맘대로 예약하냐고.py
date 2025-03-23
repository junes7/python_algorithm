import sys
input=lambda:sys.stdin.readline().rstrip()
T,X=map(int,input().split())
N=int(input())
cnt=0
for i in range(N):
    K=int(input())
    arr=[*map(int,input().split())]
    if X in arr:
        cnt+=1
print("YES" if cnt==N else "NO")