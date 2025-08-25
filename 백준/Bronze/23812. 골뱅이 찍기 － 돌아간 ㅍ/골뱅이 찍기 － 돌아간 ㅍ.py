import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for i in range(5):
    for j in range(n):
        if i%2==0:
            print('@'*n+'   '*n+'@'*n)
        else:
            print('@'*n+'@@@'*n+'@'*n)