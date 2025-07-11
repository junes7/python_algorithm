import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(int,input().split())]
tar,cnt,maxn=0,0,0
for i in arr:
    if tar<i:
        tar=i
        cnt=0
    else:
        cnt+=1
    if maxn<cnt:
        maxn=cnt
print(maxn)