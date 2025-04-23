import sys
input=lambda:sys.stdin.readline().rstrip()
a,i=map(int,input().split())
print(a*(i-1)+1)