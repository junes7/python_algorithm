import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=int(input()),10
rlt=n
for i in range(1,int(input())+1):
    rlt+=n*(m**i)
print(rlt)