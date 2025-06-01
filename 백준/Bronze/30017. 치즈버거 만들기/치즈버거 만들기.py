import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=map(int,input().split())
c=3
c+=min(a-2,b-1)*2
print(c)