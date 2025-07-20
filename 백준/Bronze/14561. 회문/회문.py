import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    a,n=map(int,input().split())
    rlt=[]
    while a>0:
        t=a%n
        rlt+=[chr(t+48) if t<10 else chr(t+55)]
        a//=n
    l,flag=len(rlt),True
    for i in range(l//2):
        if rlt[i]!=rlt[l-1-i]:
            flag=False
            break
    print(1 if flag else 0)