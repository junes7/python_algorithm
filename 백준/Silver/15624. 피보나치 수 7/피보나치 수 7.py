import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
f=[0,1]
for i in range(2,n+1):
    f+=[(f[i-1]+f[i-2])%1000000007]
print(f[n])