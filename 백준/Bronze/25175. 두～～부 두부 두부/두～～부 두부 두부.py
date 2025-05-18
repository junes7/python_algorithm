import sys
input=lambda:sys.stdin.readline().rstrip()
n,m,k=map(int,input().split())
while k<0: k+=n
rlt=((k-3)%n)+m
if rlt>n: rlt%=n
print(rlt)