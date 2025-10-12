import sys
input=lambda:sys.stdin.readline().rstrip()
N=int(input())
board=[[0]*102 for _ in range(102)] #만약 마지막 좌표쪽에 둘레가 있다면 체크하기 어려우므로 여유를 더주기
for _ in range(N):
    x, y = map(int, input().split())
    # 색종이가 정사각형의 10x10
    for i in range(x, x + 10):
        for j in range(y, y + 10):
            board[i][j] = 1
cnt=0
for i in range(1,101):
    for j in range(1,101):
        #i,j 좌표가 검은 영역이라면 4방탐색을진행해서 흰영역에 도달하면 카운트 1 증가
        if board[i][j] == 1:
            for di,dj in ((0,1),(0,-1),(1,0),(-1,0)):
                ni = i+di
                nj= j+dj
                if board[ni][nj] == 0:
                    cnt +=1
print(cnt)