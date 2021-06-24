# 생명 게임 2(Life Game)
# 생명 게임을 일반화 시켜보자. 이번에는 격자판의 크기 a* b가 주어지고,
# 생명이 태어나기 위한 조건(x), 생명을 유지하기 위한 최소 조건(y), 생명이
# 죽는 최소 조건(z)이 입력으로 주어진다. 룰은 생명 게임 1을 참고하고,
# k세대가 지난 후의 모습을 출력하시오.
# method 1
a, b = map(int, input().split())
x, y, z = map(int, input().split())
d = [[0] * (b+2) for i in range(a+2)]
next_gen = [[0] * (b+2) for i in range(a+2)]
for i in range(1, a+1):
    t = list(map(int, input().split()))
    for j in range(1, b+1):
        d[i][j] = t[j-1]
k = int(input())
while k >= 0:
    k -= 1
    for i in range(1, a+1):
        for j in range(1, b+1):
            life  = d[i-1][j-1] + d[i-1][j] + d[i-1][j+1] + d[i][j-1] + d[i][j+1] + d[i+1][j-1] + d[i+1][j] + d[i+1][j+1]
            if d[i][j] == 0:
                next_gen[i][j] = 1 if life == x else 0
            else:
                next_gen[i][j] = 1 if y <= life and life < z else 0
    for i in range(1, a+1):
            for j in range(1, b+1):
                d[i][j] = next_gen[i][j]
for x in range(1, a+1):
    for y in range(1, b+1):
        print(next_gen[x][y], end=' ')
    print()