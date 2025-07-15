import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=sorted([*map(int,input().split())])
flag=True
for i in range(n):
    if i+1!=arr[i]:
        flag=False
        print(i+1)
        break
if flag:
    print(n+1)