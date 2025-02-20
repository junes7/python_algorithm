import sys
sys.setrecursionlimit(10**5)
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
wine=[int(input()) for _ in range(n)]
memo=[-1]*n
def solve(n):
    if n==0:
        return wine[0]
    elif n==1:
        return wine[0]+wine[1]
    elif n==2:
        return max(solve(1),max(wine[0],wine[1])+wine[2])
    if memo[n]!=-1: return memo[n]
    case1=solve(n-1)
    case2=solve(n-2)+wine[n]
    case3=solve(n-3)+wine[n-1]+wine[n]
    memo[n]=max(case1,case2,case3)
    return memo[n]
print(solve(n-1))