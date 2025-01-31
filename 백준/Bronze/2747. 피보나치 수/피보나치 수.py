import sys
n=int(sys.stdin.readline().rstrip())
memo=[0]*(n+1)
def fibo(n):
    if n<2:
        return n
    if memo[n]:
        return memo[n]
    memo[n]=fibo(n-1)+fibo(n-2)
    return memo[n]
print(fibo(n))