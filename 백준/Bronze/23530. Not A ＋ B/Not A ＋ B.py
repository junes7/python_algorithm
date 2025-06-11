import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    a,b=map(int,input().split())
    print(50 if a==1 and b==1 else 1)