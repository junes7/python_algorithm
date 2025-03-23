import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[*map(int,input().split())]
maxn,s=max(arr),0
for c in arr:
    s+=maxn-c
print(s)