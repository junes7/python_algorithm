# 설탕과자(sugar confectionery product) 뽑기
# extract sugar snacks
# 길이가 다른 몇 개의 막대를 바둑판과 같은 격자판에
# 놓는데, 막대에 있는 설탕과자 이름 아래에 있는
# 번호를 뽑으면 설탕과자를 가져가는 게임이다.
# (잉어, 붕어, 용 등 여러 가지가 적혀있다.)
# 격자판의 세로(h), 가로(w), 막대의 개수(n),
# 각 막대의 길이(l), 막대를 놓는 방향과
# (d: 가로는 0, 세로는 1) 막대를 놓는 막대의
# 가장 왼쪽 또는 위쪽의 위치(x, y)가 주어질 때,
# 격자판을 채운 막대의 모양을 출력하는 프로그램 작성
# 입력: 첫 줄에 격자판의 세로(h), 가로(w),
# 두 번째 줄에 놓을 수 있는 막대의 개수(n),
# 세 번째 줄에 각 막대의 길이(l), 방향(d),
# 좌표(x, y)가 입력된다.
# 출력: 모든 막대를 놓은 격자판의 상태 출력
# 막대에 의해 가려진 경우 1, 아닌 경우 0 출력
# 단, 숫자는 공백으로 구분하여 출력한다.
# method 1
# 값 입력받기
h, w = input().split()
h = int(h)
w = int(w)
# 격자판(b) 생성
b = []
for i in range(h):
    b.append([])
    for j in range(w):
        b[i].append(0)
# 막대의 개수 입력
n = int(input())
# 각 막대의 정보 입력받아 격자판에 값 넣기
for i in range(n):
    l, d, x, y = input().split()
    l = int(l)
    d = int(d)
    x = int(x) - 1
    y = int(y) - 1
    if l==1:
        b[x][y] = 1
    else:
        b[x][y] = 1   
        for j in range(l-1):
            if d == 0:
                y += 1
            elif d == 1:
                x += 1
            b[x][y] = 1
# 격자판 출력
for i in range(h):
    for j in range(w):
        print(b[i][j], end=' ')
    print()