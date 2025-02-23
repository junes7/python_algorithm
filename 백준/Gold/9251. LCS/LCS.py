import sys
sys.setrecursionlimit(10**4)
input=lambda:sys.stdin.readline().rstrip()
s1=input()
s2=input()
M,N=len(s1),len(s2)
memo=[[-1]*(N+1) for _ in range(M+1)]
def lcs(s1,s2):
    m,n=len(s1),len(s2)
    if m==0 or n==0: return 0
    if memo[m][n]!=-1: return memo[m][n]
    if s1[-1]==s2[-1]:
        memo[m][n]=lcs(s1[:-1],s2[:-1])+1
    else:
        case1=lcs(s1[:-1],s2)
        case2=lcs(s1,s2[:-1])
        memo[m][n]=max(case1,case2)
    return memo[m][n];
print(lcs(s1,s2))