import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n,c=map(int,input().split())
    print(n//c+(0 if n%c==0 else 1))