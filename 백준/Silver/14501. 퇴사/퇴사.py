import sys
input=lambda:sys.stdin.readline().rstrip()
ti,pi=[],[]
n=int(input())
for i in range(n):
    t,p=map(int,input().split())
    ti+=[t]
    pi+=[p]
dp=[0]*(n+1)
def solve(day):
    if n<=day: return 0;
    if dp[day]: return dp[day]
    case1,case2=solve(day+1),0
    if day+ti[day]<=n:
        case2=solve(day+ti[day])+pi[day]
    dp[day]=max(case1,case2)
    return dp[day]
print(solve(0))