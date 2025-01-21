import sys
n,m=map(int,sys.stdin.readline().split())
s=[sys.stdin.readline().split()[0] for i in range(n)]
cnt=0
for i in range(m):
    if sys.stdin.readline().split()[0] in s:
        cnt+=1
print(cnt)