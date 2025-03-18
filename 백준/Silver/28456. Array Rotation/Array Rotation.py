import sys
input=lambda:sys.stdin.readline().rstrip()
N=int(input())
arr=[[*map(int,input().split())] for _ in range(N)]
Q=int(input())
for i in range(Q):
    st=input()
    if len(st)==1:
        cmd=int(st)
    elif len(st)>1:
        cmd,sel=map(int,st.split())
    if cmd==1:
        sel-=1
        t=arr[sel].pop()
        arr[sel]=[t]+arr[sel][:len(arr[sel])]
    elif cmd==2:
        arrTemp=[[0]*N for _ in range(N)]
        for i in range(1,N+1):
            for j in range(1,N+1):
                arrTemp[j-1][N-i]=arr[i-1][j-1]
        arr=arrTemp
for i in range(N):
    for j in range(N):
        print(arr[i][j],end=' ')
    print()