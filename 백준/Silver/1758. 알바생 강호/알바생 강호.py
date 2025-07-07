import sys
input=lambda:sys.stdin.readline().rstrip()
s=0
n=int(input())
arr=[0]+sorted([int(input()) for _ in range(n)],reverse=True)
for i in range(1,n+1):
    t=arr[i]-(i-1)
    s+=0 if t<0 else t
print(s)