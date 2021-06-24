# 생명 게임 1(Life Game)
# 생명 게임은 25X25 격자에서 하는 게임이다. 각 칸에는 최대 1마리의 생명이
# 존재할 수 있으며, 한 "세대"가 지날때마다 생명이 탄생하거나 죽는다.
# 생명이 탄생하거나 죽는 조건은 다음과 같다: 
# 1. 생명이 없는 칸의 주위 8칸에 정확히 3마리의 생명이 존재하는 경우
# 다음 세대에 그 칸에서 생명이 탄생한다.
# 2. 생명이 있는 칸의 주위 8칸에 4마리 이상 또는 1마리 이하의 생명이
# 존재하는 경우 다음 세대에 그 칸의 생명은 죽는다.
# 3. 생명이 있는 칸의 주위 8칸에 2마리 또는 3마리의 생명이 존재하는 경우
# 다음 세대에 그 칸의 생명은 생존한다.
# method 1
d = [[0] * 27 for i in range(27)]
next_gen = [[0] * 27 for i in range(27)]
life = 0
for i in range(1, 26):
    t = list(map(int, input().split()))
    for j in range(1, 26):
        d[i][j] = t[j-1]
for i in range(1, 26):
    for j in range(1, 26):
        life = d[i-1][j-1] + d[i-1][j] + d[i-1][j+1] + d[i][j-1] + d[i][j+1] + d[i+1][j-1] + d[i+1][j] + d[i+1][j+1]
        if d[i][j] == 0:
            next_gen[i][j] = 1 if life == 3 else 0
        else:
            next_gen[i][j] = 1 if life == 2 or life == 3 else 0
for x in range(1, 26):
    for y in range(1, 26):
        print(next_gen[x][y], end=' ')
    print()