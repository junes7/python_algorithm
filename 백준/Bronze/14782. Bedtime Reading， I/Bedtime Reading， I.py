import sys
input=lambda:sys.stdin.readline().rstrip()
n,rlt=int(input()),[]
for i in range(1,n+1):
    if n%i==0:
        rlt+=[i]
print(sum(rlt))