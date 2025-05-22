import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=map(int,input().split())
rlt=1
for i in range(a,b+1):
    rlt*=i*(i+1)//2
print(rlt%14579)