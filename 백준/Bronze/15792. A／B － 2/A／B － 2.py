import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=map(int,input().split())
print(round(a/b,1000))