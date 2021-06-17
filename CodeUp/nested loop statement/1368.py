# 평행사변형 출력하기 2(print parallelogram)
# 이번엔 공백의 방향까지 정하여 평행사변형을 만들자. 방향 정보는 다음과 같다.
# L=왼쪽 아래에 공백, R=오른쪽 아래에 공백, 이 조건들에 맞춰 평행사변형 출력
# 높이 h와 밑변 k, 방향 정보 d가 한줄로 공백으로 분리되어 입력된다.
# method 1
h, k, d = input().split()
h, k = int(h), int(k)
if d == 'L':
    a = k + 1
    for i in range(h):
        for j in range(1, a):
            if j < a - k:
                print(' ', end='')
            else:
                print('*', end='')
        a += 1
        print()
else: # d == 'R
    b = h + k
    for i in range(h):
        for j in range(1, b):
            if j < b - k:
                print(' ', end='')
            else:
                print('*', end='')
        b -= 1
        print()