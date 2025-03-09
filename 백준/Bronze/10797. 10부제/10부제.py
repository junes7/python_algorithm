import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
cnt,arr=0,[*map(int,input().split())]
for a in arr:
    if a==n:
        cnt+=1
print(cnt)