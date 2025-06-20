import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
f=1
for i in range(1,n+1):
    f*=i
rlt=str(f)
for i in range(len(rlt)-1,-1,-1):
    if rlt[i]!='0':
        print(rlt[i])
        break