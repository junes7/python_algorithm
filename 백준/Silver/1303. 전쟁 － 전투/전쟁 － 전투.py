import sys
def calculate_power(n,m,board):
    visited=[[False]*n for _ in range(m)]
    dy=[-1,1,0,0]
    dx=[0,0,-1,1]
    t_white=t_blue=0
    def dfs(y,x,color):
        cnt=1
        visited[y][x]=True
        for i in range(4):
            ny=y+dy[i]
            nx=x+dx[i]
            if 0<=ny<m and 0<=nx<n:
                if not visited[ny][nx] and board[ny][nx]==color:
                    cnt+=dfs(ny,nx,color)
        return cnt
    for i in range(m):
        for j in range(n):
            if not visited[i][j]:
                cnt=dfs(i,j,board[i][j])
                if board[i][j]=='W':
                    t_white+=cnt*cnt
                else:
                    t_blue+=cnt*cnt
    return t_white,t_blue
mii=lambda:sys.stdin.readline().rstrip()
n,m=map(int,mii().split())
board=[mii() for _ in range(m)]
white,blue=calculate_power(n,m,board)
print(white,blue)