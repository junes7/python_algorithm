import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
prevx,prevy=0,0
flag=True
for i in range(n):
    a,b=map(int,input().split())
    if prevx>a or prevy>b:
        flag=False
        break
    else:
        prevx,prevy=a,b
print("yes" if flag else "no")