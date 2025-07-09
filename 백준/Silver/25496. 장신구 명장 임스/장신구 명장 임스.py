import sys
input=lambda:sys.stdin.readline().rstrip()
p,n=map(int,input().split())
arr=sorted([*map(int,input().split())])
cnt=0
for i in range(n):
    if p>=200:
        break
    p+=arr[i]
    cnt+=1
print(cnt)