import sys
n,*s=sys.stdin.read().split()
n,rlt=int(n),[]
for i in range(n):
    rlt+=[int(s[i][::-1])]
rlt.sort()
print(*rlt,sep="\n")