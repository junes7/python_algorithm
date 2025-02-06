import sys
def fibo(n):
    mod=1000000
    p=mod//10*15
    fib=[0]*p
    fib[1]=1
    for i in range(2,p):
        fib[i]=fib[i-1]+fib[i-2]
        fib[i]%=mod
    return fib[n%p]
n=int(sys.stdin.readline().rstrip())
print(fibo(n))