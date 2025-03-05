import sys
input=lambda:sys.stdin.readline().rstrip()
n1,k1,n2,k2=map(int,input().split())
print(n1*k1+n2*k2)