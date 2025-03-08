import sys
input=lambda:sys.stdin.readline().rstrip()
s=sum([*map(int,input().split())])
t=sum([*map(int,input().split())])
print(s if s>=t else t)