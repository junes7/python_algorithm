import sys
input=lambda:sys.stdin.readline().rstrip()
n, m = map(int, input().split())
chess_board = [list(input()) for _ in range(n)]
ans = sys.maxsize
# 체스판의 8*8크기의 정사각형의 시작점을 추출한다.
for y in range(n-7):
    for x in range(m-7):
        # 하얀색 칸으로 시작하는 정사각형이라고 가정했을 때 수정해야할 칸의 개수
        start_white_cnt = 0
        # 검은색 칸으로 시작하는 정사각형이라고 가정했을 때 수정해야할 칸의 개수
        start_black_cnt = 0
        # 추출한 정사각형의 모든 칸을 완전 탐색해준다.
        for i in range(y, y + 8):
            for j in range(x, x+8):
                if (i+j) % 2 == 0:
                    if chess_board[i][j] != "W":
                        start_white_cnt += 1
                    else:
                        start_black_cnt += 1
                else:
                    if chess_board[i][j] != "B":
                        start_white_cnt += 1
                    else:
                        start_black_cnt += 1
        ans = min(ans, start_white_cnt, start_black_cnt)
print(ans)