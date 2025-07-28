import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
rlt=""
for _ in range(n):
    rlt+=str(n)
print(rlt[:m])