# 윈도우 화면 출력하기(print window screen)
# 다음 조건을 잘 읽고 윈도우 화면을 출력해보자.
# 1. 윈도우의 바탕화면 크기는 30행, 60칸으로 구성되어 있다.(좌표는
# 좌측상단이 (1,1) ~ 우측 하단이 (60,30)이다.)
# 2. 윈도우의 기본 바탕은 '.'으로 구성되어 있다.
# 3. 프로그램을 실행하면 다음 형태의 프로그램 윈도우가 생성된다.
# +프로그램명------+
# |               |
# |               |
# +---------------+
# 4. 만약 프로그램명이 너무 긴 경우 오른쪽 '+'가 나오기 직전까지
# 프로그램명을 출력한다.
# 5. 프로그램 윈도우안은 공백으로 채워진다.
# 6. 프로그램 윈도우가 여러번 중첩해서 실행 될 경우 마지막에 실행 된
# 프로그램일 수록 위에 올라가게 된다.(즉, 이전에 실행된 프로그램은 
# 가려질 수 있다.)
# 이 조건으로 최종 윈도우 상태를 출력하는 프로그램을 작성하시오.
# 첫째 줄에 실행될 프로그램 윈도우의 개수 n이 입력된다.
# 둘째 줄에 n+1째 줄까지 프로그램 윈도우에 대한 정보가 한 줄에 입력된다.
# 첫번째 정보는 프로그램명(공백없음, 길이 60글자 이하),
# 두번째 세번째 정보는 프로그램 윈도우의 좌측 상단(x1, y1)이고,
# 네번째 다섯번째 정보는 프로그램 윈도우의 우측 하단(x2, y2)이다.
# method 1
n = int(input())
d = [['.'] * 60 for i in range(30)]
s = []
for i in range(n):
    s.append(list(input().split()))
for i in range(n):
    for j in range(1, len(s[i])):
        s[i][j] = int(s[i][j])
x1, y1, x2, y2 = 0, 0, 0, 0
for k in range(n):
    x1, y1 = s[k][1]-1, s[k][2]-1
    x2, y2 = s[k][3]-1, s[k][4]-1
    l = 0
    for i in range(y1, y2+1):
        if i == y1:
            for j in range(x1, x2+1):
                if j == x1 or j == x2:
                    d[i][j] = '+'
                elif j > x1 and j <= (x1 + len(s[k][0])):
                    d[i][j] = s[k][0][l]
                    l += 1
                elif j > (x1 + len(s[k][0])) and j < x2:
                    d[i][j] = '-'
        if y1 < i and i < y2:
            for j in range(x1, x2+1):
                if j == x1 or j == x2:
                    d[i][j] = '|'
                elif j > x1 and j < x2:
                    d[i][j] = ' '
        if i == y2:
            for j in range(x1, x2+1):
                if j == x1 or j == x2:
                    d[i][j] = '+'
                elif j > x1 and j < x2:
                    d[i][j] = '-'
for x in range(30):
    for y in range(60):
        print(d[x][y], end='')
    print()