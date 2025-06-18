import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
def fibo(n):
    a,b=1,1
    mod=1000000007
    for i in range(n-2):
        a,b=b,(a+b)%mod
    return b
def fibonacci(n):
    return n-2
print(fibo(n),fibonacci(n))