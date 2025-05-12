import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    v,e=map(int,input().split())
    print(2+e-v)