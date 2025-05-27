import sys
input=lambda:sys.stdin.readline().rstrip()
n,k=int(input()),64
while n%2==0:
    n//=2
    k-=1
print(k)