import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=map(int,input().split())
print(a+1 if a<b else b)