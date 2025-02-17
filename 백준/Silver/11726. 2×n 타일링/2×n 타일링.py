import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
mod=10007
memo=[0 for _ in range(n+1)]
def F(n):
    if n<=2:
        return n
    if memo[n]>0:
        return memo[n]
    memo[n]=F(n-1)+F(n-2)
    memo[n]%=mod
    return memo[n]
print(F(n))