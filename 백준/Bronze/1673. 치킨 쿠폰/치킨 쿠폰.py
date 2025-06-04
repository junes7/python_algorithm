import sys
input=lambda:sys.stdin.readline().rstrip()
while 1:
    try:
        n,k=map(int,input().split())
        rlt=n
        while n//k:
            rlt+=n//k
            n=n//k+n%k
        print(rlt)
    except:
        break