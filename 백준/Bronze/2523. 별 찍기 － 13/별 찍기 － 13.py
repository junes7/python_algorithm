import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for i in range(1,2*n):
    print('*'*(i if i<n else 2*n-i))