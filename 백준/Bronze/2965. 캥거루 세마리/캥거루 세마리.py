import sys
input=lambda:sys.stdin.readline().rstrip()
a,b,c=map(int,input().split())
print(max(b-a-1,c-b-1))