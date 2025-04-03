import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
flag=True
for _ in range(n):
    arr=input().split()
    if arr.count('A')!=1:
        flag=False
        break
print("Yes" if flag else "No")