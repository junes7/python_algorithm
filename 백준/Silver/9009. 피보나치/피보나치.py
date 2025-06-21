import sys
input=lambda:sys.stdin.readline().rstrip()
f=[0,1]
for i in range(2,46):
    f+=[f[i-1]+f[i-2]]
for _ in range(int(input())):
    n,rlt=int(input()),[]
    for i in range(45,0,-1):
        if f[i]<=n:
            rlt+=[f[i]]
            n-=f[i]
        if n==0:
            rlt.sort()
            for c in rlt:
                print(c,end=" ")
            break
    print()