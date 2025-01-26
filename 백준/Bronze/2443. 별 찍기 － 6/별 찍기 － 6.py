import sys
n=int(sys.stdin.readline())
for i in range(n):
    for j in range(i):
        print(' ',end='')
    for j in range(i,2*n-1-i):
        print('*',end='')
    print()