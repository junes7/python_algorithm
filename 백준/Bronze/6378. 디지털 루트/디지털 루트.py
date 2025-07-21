import sys
input=lambda:sys.stdin.readline().rstrip()
while 1:
    n=int(input())
    if n==0: break
    while n>=10:
        tmp=0
        while n>0:
            tmp+=n%10
            n//=10;
        n=tmp
    print(n)