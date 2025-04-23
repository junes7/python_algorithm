import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for i in range(1,n+1):
    print('*'*i)
for i in range(1,n):
    print('*'*(n-i))