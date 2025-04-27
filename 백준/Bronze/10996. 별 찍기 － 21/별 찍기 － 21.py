import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for i in range(n):
    print('* '*(n-n//2))
    print(' *'*(n//2))