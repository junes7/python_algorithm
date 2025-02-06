import sys
def fibo(n):
    return 0 if n<1 else 1 if n<2 else fibo(n-1)+fibo(n-2)
n=int(sys.stdin.readline().rstrip())
print(fibo(n))