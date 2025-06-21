import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
f=[1]*2
for i in range(2,n+1):
    f+=[(f[i-1]+f[i-2]+1)%1000000007]
print(f[n])