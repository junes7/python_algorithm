# 체크보드 출력(print checkboard)
# 다음 체크보드를 출력하고자 한다.
# 1. 체크 보드는 'X'와 '.'으로 구성되어 있다.
# 2. 한 칸은 'X'로 이루어져 있거나 '.'으로 이루어져 있다.
# 3. 체크 보드의 칸은 인접한 칸 끼리 모양이 다르다.
# 4. 체크보드의 행과 열의 크기가 주어지고, 한 칸의 크기가 주어졌을 때
#  체크보드를 출력하시오.
# 첫 행에 체크 보드의 크기가 칸의 수로 입력된다.(행, 열)
# 둘째 행에 한 칸의 크기가 입력된다.(행, 열)
# method 1
a, b = map(int, input().split())
c, d = map(int, input().split())
def printBoard(b, d, outputflag):
    for i in range(b):
        if i % 2 == outputflag:
            for j in range(d):
                print('X', end='')
        else:
            for j in range(d):
                print('.', end='')
    print()
for i in range(a):
    if i % 2 == 0:
        for j in range(c):
            printBoard(b, d, 0)
    else:
        for j in range(c):
            printBoard(b, d, 1)