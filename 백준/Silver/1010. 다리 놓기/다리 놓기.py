import sys
input=lambda:sys.stdin.readline().rstrip()
def facto(n):
    num=1
    for i in range(1,n+1):
        num*=i
    return num
for _ in range(int(input())):
    n,m=map(int,input().split())
    brid=facto(m)//(facto(n)*facto(m-n))
    print(brid)