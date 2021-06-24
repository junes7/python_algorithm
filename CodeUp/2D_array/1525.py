# 크레이지 아케이드(Crazy Arcade)
# 게임 "크레이지 아케이드"를 구현해보자.
# 10 * 10 크레이지 아케이드 게임 현황이 주어진다.
# 0은 빈공간을 뜻한다.
# 1 이상의 수는 물풍선으로, 물풍선은 자신의 숫자만큼 상하좌우로 터진다.
# -1은 장애물로, 물풍선이 터질때 물줄기가 여기 닿으면 멈춘다.
# 그 후 플레이어의 수 n이 입력되고, n개의 플레이어의 행, 열이 주어진다.
# 이 때, 플레이어는 장애물에 위치하지 않는다.
# 물풍선이 모두 터질 때의 정보를 출력하는 프로그램을 작성하라.
# 그 방법은 다음과 같다.
# 1. 보드판을 출력한다.(0은 빈공간, -1은 장애물, -2는 물풍선, 플레이어는
# 입력된 순서+1로 표현한다.) 2. 플레이어의 생존 유무를 출력한다.
# method 1
d = [[0] * 10 for i in range(10)]
for i in range(0, 10):
    t = list(map(int, input().split()))
    for j in range(0, 10):
        d[i][j] = t[j]
n = int(input())
p = [[0] * 2 for i in range(n)]
for i in range(0, 10):
    for j in range(0, 10):
        if d[i][j] > 0:
            m = d[i][j]
            # initialize flag value
            d[i][j] = -2
            # down
            for k in range(1, m+1):
                if i+k > 9:
                    break
                else:
                    if d[i+k][j] != -1 and d[i+k][j] <= 0:
                        d[i+k][j] = -2
                    else:
                        if d[i+k][j] == -1:
                            break
            # up
            for k in range(1, m+1):
                if i-k < 0:
                    break
                else:
                    if d[i-k][j] != -1 and d[i-k][j] <= 0:
                        d[i-k][j] = -2
                    else:
                        if d[i-k][j] == -1:
                            break
            # left
            for k in range(1, m+1):
                if j-k < 0:
                    break
                else:
                    if d[i][j-k] != -1 and d[i][j-k] <= 0:
                        d[i][j-k] = -2
                    else:
                        if d[i][j-k] == -1:
                            break
            # right
            for k in range(1, m+1):
                if j+k > 9:
                    break
                else:
                    if d[i][j+k] != -1 and d[i][j+k] <= 0:
                        d[i][j+k] = -2
                    else:
                        if d[i][j+k] == -1:
                            break
for i in range(n):
    a, b = map(int, input().split())
    p[i][0], p[i][1] = a-1, b-1
    if d[a-1][b-1] == 0:
        d[a-1][b-1] = i+1
for x in range(0, 10):
    for y in range(0, 10):
        print(d[x][y], end= ' ')
    print()
print("Character Information")
for i in range(n):
    x = p[i][0]
    y = p[i][1]
    if d[x][y] == i+1:
        print("player %d survive" % int(i+1))
    else:
        print("player %d dead" % int(i+1))