import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for i in range(n):
    print('* '*n if i%2==0 else ' *'*n)