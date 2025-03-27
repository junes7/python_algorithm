import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
obj=[input() for _ in range(n)]
space=input()
flip=[input() for _ in range(n)]
cnt=0
for i in range(n):
    for j in range(m):
        if obj[i][j]=='W':
            if flip[i][j]!='B':
                cnt+=1
        else:
            if flip[i][j]!='W':
                cnt+=1
print(cnt)