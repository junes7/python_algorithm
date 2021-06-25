# 레이저 체스(Laser Chess)
# 맨사들이 주로 즐겨 한다는 레이저 체스 게임. 레이저 체스는 레이저 장기라는
# 이름으로 더 지니어스의 데스매치 게임으로 나오기도 했다. 그 레이저 체스에는
# 스플리터라는 장치가 있다. 화살표 방향으로 레이저를 쏠 때, 중간에 스플리터를
# 끼워 넣으면, 레이저가 위/아래로 분산된다. 맵 안에는 스플리터가 3개 있고,
# 4번째 줄에 레이저를 쏜다고 했을 때 맵의 상태를 출력하시오.
# 세 줄에 걸쳐 (행, 열)의 형태로 스플리터 위치가 입력된다.
# 스플리터가 각 레이저를 분산했을 때 레이저가 차지하는 부분을 1로 레이저가
# 차지하지 않는 부분을 0, 스플리터를 2으로 하여 7*7의 맵을 출력하라.
# method 1
c = [[0] * 7 for i in range(7)]
sp = [[0] *2 for i in range(3)]
for i in range(3):
    a, b = map(int, input().split())
    sp[i][0], sp[i][1] = a-1, b-1
for j in range(7):
    c[3][j] = 1
for i in range(3):
    if sp[i][0] == 3:
        for j in range(7):
            c[j][sp[i][1]] = 1
for index in range(2):
    for i in range(3):
        if c[sp[i][0]][sp[i][1]] == 1:
            for j in range(7):
                c[sp[i][0]][j] = 1
                c[j][sp[i][1]] = 1
for i in range(3):
    c[sp[i][0]][sp[i][1]] = 2
for x in range(7):
    for y in range(7):
        print(c[x][y], end=' ')
    print()
################################
# for i in range(7):
#     if i == 3:
#         for j in range(7):
#             if c[i][j] != 2:
#                 c[i][j] = 1
#     else:
#         for j in range(7):
#             if c[3][j] == 2:
#                 # up
#                 for k in range(i-1, -1, -1):
#                     if c[k][j] != 2 and c[k][j] != 1:
#                             c[k][j] = 1
#                 # down
#                 for k in range(i+1, 7):
#                     if c[k][j] != 2 and c[k][j] != 1:
#                         c[k][j] = 1
#                 # left
#                 for l in range(j-1, -1, -1):
#                     if c[i][l] != 2 and c[i][l] != 1:
#                         c[i][l] = 1
#                 # right
#                 for l in range(j+1, 7):
#                     if c[i][l] != 2 and c[i][l] != 1:
#                         c[i][l] = 1
# for x in range(7):
#     for y in range(7):
#         print(c[x][y], end=' ')
#     print()                   