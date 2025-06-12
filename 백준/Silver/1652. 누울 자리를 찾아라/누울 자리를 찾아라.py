import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[input() for _ in range(n)]
maxn=[0]*2
for i in range(n):
    len_w,len_c=0,0
    for j in range(n):
        if arr[i][j]=='.':
            len_w+=1
        else:
            len_w=0
        if len_w==2:
            maxn[0]+=1
        if arr[j][i]=='.':
            len_c+=1
        else:
            len_c=0
        if len_c==2:
            maxn[1]+=1
print(*maxn)