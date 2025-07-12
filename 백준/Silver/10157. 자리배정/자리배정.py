import sys
input=lambda:sys.stdin.readline().rstrip()
c,r=map(int,input().split())
k=int(input())
if k>c*r:
    print(0)
    exit(0)
def move(x,y):
    visited=[[False]*(c+1) for _ in range(r+1)]
    dx=[0,1,0,-1]
    dy=[1,0,-1,0]
    tmp,i=1,0
    while True:
        if tmp==k:
            return x+1,y+1
        visited[y][x]=True
        nx=x+dx[i]
        ny=y+dy[i]
        if (0 <= nx < c and 0 <= ny < r):  # 다음 점이 범위안이고
            if visited[ny][nx] != True:  # 지나간 점이 아니라면
                x = nx  # 이동하기
                y = ny
                tmp += 1
            else:  # 지나간 점이면 방향 바꾸기
                i = (i + 1) % 4
        else:  # 다음 점이 범위를 벗어나면 방향 바꾸기
            i = (i + 1) % 4
print(*move(0,0))