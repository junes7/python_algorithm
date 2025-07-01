import sys
input=lambda:sys.stdin.readline().rstrip()
n,l=map(int,input().split())
arr=sorted([*map(int,input().split())])
for i in range(n):
    if arr[i]<=l:
        l+=1
    else:
        break
print(l)