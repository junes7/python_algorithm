import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
f=1
for i in range(1,n+1):
    f*=i
    while f%10==0:
        f//=10
    f%=10**20
print(f%10)