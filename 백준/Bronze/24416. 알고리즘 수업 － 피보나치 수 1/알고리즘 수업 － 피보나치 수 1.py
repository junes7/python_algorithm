import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
def fibo(n):
    f=[0]*(n+1)
    f[1],f[2]=1,1
    for i in range(3,n+1):
        f[i]=f[i-1]+f[i-2]
    return f[n]
def fibonacci(n):
    return n-2
print(fibo(n),fibonacci(n))