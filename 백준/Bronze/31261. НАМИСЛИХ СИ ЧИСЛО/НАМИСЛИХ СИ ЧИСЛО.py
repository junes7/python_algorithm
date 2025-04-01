import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=map(int,input().split())
print(((b+a)*a+a)*a)