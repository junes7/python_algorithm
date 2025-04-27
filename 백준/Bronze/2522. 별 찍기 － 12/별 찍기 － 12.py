import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for i in range(1,2*n):
    print(' '*(n-i)+'*'*i if i<=n else ' '*(i-n)+'*'*(2*n-i))