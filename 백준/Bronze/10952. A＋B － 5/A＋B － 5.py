import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    a,b=map(int,input().split())
    if a+b==0: break
    print(a+b)