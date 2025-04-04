import sys,math
input=lambda:sys.stdin.readline().rstrip()
def clean_room(N, M, r, c, d, grid):
    dx = [-1, 0, 1, 0]
    dy = [0, 1, 0, -1]
    cleaned = [[False] * M for _ in range(N)]
    cleaned_count = 0
    while True:
        if not cleaned[r][c]:
            cleaned[r][c] = True
            cleaned_count += 1
        cleaned_or_wall_around = True
        for _ in range(4):
            d = (d+3)%4
            nx = r + dx[d]
            ny = c + dy[d]
                        
            if 0 <= nx < N and 0 <= ny < M and grid[nx][ny]==0 and not cleaned[nx][ny]:
                # 이동 가능할 경우 좌표 변경 (정상 좌표이면서 청소가되어 있지 않으며 이동가능한 좌표)
                r, c = nx, ny
                cleaned_or_wall_around = False
                break
        if cleaned_or_wall_around:
            # 이동 불가할 경우 뒤 방향으로 이동
            back_direction = (d+2)%4
            br = r + dx[back_direction]
            bc = c + dy[back_direction]
            if 0 <= br < N and 0 <= bc < M and grid[br][bc] == 0:
                r, c = br, bc
            else:
                break
    return cleaned_count
n,m=map(int,input().split())
r,c,d=map(int,input().split())
grid=[[*map(int,input().split())] for _ in range(n)]
print(clean_room(n,m,r,c,d,grid))