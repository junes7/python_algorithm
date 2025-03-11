import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    n=float(input())
    if n==0: break
    n=1+n+n**2+n**3+n**4
    print(f'{n:.2f}')