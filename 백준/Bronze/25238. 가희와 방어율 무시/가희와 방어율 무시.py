import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=map(int,input().split())
rlt=a-a*b/100
print(1 if rlt<100 else 0)