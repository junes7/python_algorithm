import sys
input=lambda:sys.stdin.readline().rstrip()
n,a,b=map(int,input().split())
rlt=[0]*3
for i in range(1,n+1):
    if i%a==0:
        if i%b!=0:
            rlt[0]+=1
        else:
            rlt[2]+=1
    elif i%b==0:
        rlt[1]+=1
print(*rlt)