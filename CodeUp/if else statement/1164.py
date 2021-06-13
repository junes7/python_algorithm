# 터널 통과하기 1(To go through a tunnel)
# 어떤 차의 높이가 170cm 이고, 3개의 터널을 차례대로 지날 것이다.
# 터널의 높이가 차의 높이보다 같거나 낮다면 차는 터널과 충돌하여
# 사고가 날 것이다. 터널의 높이가 차례대로 3개 주어지면 터널을
# 무사히 잘 통과하면 PASS를 출력하고, 사고가 난다면 CRASH를 출력
# method 1
t1, t2, t3 = map(int, input().split())
if t1 <= 170 or t2 <= 170 or t3 <= 170:
    print('CRASH')
else:
    print('PASS')