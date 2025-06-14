import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
cnt,rlt=1,0
while n>=1:
    if n<cnt:
        cnt=1
    n-=cnt
    rlt+=1
    cnt+=1
print(rlt)