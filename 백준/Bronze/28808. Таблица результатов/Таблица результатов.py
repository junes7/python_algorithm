import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
prob=[input() for _ in range(n)]
cnt=0
for i in range(n):
    for j in range(m):
        if prob[i][j]=='+':
            cnt+=1
            break
print(cnt)