import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
rlt,m=0,1
while n>0:
    rlt+=n%2*m
    m*=10
    n//=2
print(rlt)