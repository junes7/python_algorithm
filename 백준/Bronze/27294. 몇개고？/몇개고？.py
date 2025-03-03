import sys
input=lambda:sys.stdin.readline().rstrip()
t,s=map(int,input().split())
print(320 if s==0 and 12<=t<=16 else 280)