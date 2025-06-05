import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
name=input()
k=int(input())
if name=="annyong":
    print(k if k%2==1 else k+1 if k+1<=n else k-1)
elif name=="induck":
    print(k if k%2==0 else k+1 if k+1<=n else k-1)