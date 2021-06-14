# 터널 통과하기 2
# 어떤 차의 높이가 170cm 이고, 3개의 터널 a, b, c를 지나간다.
# 각 터널의 높이가 차의 높이와 같거나 낮으면 차는 터널과
# 충돌해 사고가 날 것이다. 터널을 무사히 통과하면 'PASS',
# 사고가 난다면 'CRASH', 그리고 처음 충돌하는 터널의 높이 출력
# method 1
a, b, c = map(int, input().split())
if a <= 170 or b <= 170 or c <= 170:
    if a <= 170:
        sc = a
    elif b <= 170:
        sc = b
    else:
        sc = c
    print('CRASH', sc)
else:
    print('PASS')