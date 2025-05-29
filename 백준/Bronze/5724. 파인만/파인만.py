import sys
input=lambda:sys.stdin.readline().strip()
while 1:
    n=int(input())
    if n==0: break
    rlt=0
    for i in range(1,n+1):
        rlt+=(n-i+1)**2
    print(rlt)