import sys
input=lambda:sys.stdin.readline().rstrip()
n,k=map(int,input().split())
W,V,memo=[],[],[]
for _ in range(n):
    w,v=map(int,input().split())
    W+=[w]
    V+=[v]
    memo+=[[-1]*(k+1)]
def solve(n,k):
    if n<0: return 0
    if memo[n][k]!=-1: return memo[n][k]
    case1=0
    prev_k=k-W[n]
    if 0<=prev_k:
        case1=solve(n-1,prev_k)+V[n]
    case2=solve(n-1,k)
    memo[n][k] = max(case1,case2)
    return memo[n][k]
print(solve(n-1,k))