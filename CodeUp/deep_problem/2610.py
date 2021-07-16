# 그림판 채우기(Fill paint)
# 10 * 10 크기의 그림이 있다. 이 그림에 그림판 색 채우기 기능을 구현하시오.
# (단, 원점은 왼쪽 위 끝이고, x값은 오른쪽, y값은 아래로 갈수록 증가한다.)
# 10 * 10 크기의 그림과 색칠할 좌표의 x, y값이 차례로 입력된다.
# _ 는 색칠되지 않은 부분이고 * 는 색칠된 부분이다.
# method 1
d = []
for i in range(10):
    d.append(list(input()))
a, b = map(int, input().split())
def paint(x, y):
    # 벗어난 범위 처리
    if x <= -1 or x >= 10 or y <= -1 or y >= 10:
        return
    if d[x][y] == '*':
        return
    if d[x][y] == '_':
        d[x][y] = '*'
        paint(x-1, y)
        paint(x+1, y)
        paint(x, y-1)
        paint(x, y+1)
    return
paint(b, a)
for x in range(10):
    for y in range(10):
        print(d[x][y], end='')
    print()