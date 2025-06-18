import sys
input=lambda:sys.stdin.readline().rstrip()
def fibo(n):
    a,b=0,1
    for _ in range(n):
        a,b=b,a+b
    return a  
for i in range(int(input())):
    p,q=map(int,input().split())
    print(f"Case #{i+1}: {fibo(p)%q}")