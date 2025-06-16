import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
files=[*map(int,input().split())]
cls=int(input())
rlt=0
for i in range(n):
    if files[i]==0: continue
    rlt+=(files[i]//cls+(0 if files[i]%cls==0 else 1))*cls
print(rlt)