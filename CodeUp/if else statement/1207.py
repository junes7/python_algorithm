# 윷놀이(playing yut)
# 윷놀이는 4개의 윷을 이용하는 게임이다.
# 도: 1개가 뒤집어진 상태
# 개: 2개가 뒤집어진 상태
# 걸: 3개가 뒤집어진 상태
# 윷: 4개가 뒤집어진 상태
# 모: 하나도 뒤집어지지 않은 상태
# 0이면 뒤집어지지 않은 상태, 1이면 뒤집어진 상태
# 4개의 윷 상태가 입력되면 도, 개, 걸, 윷, 모를
# 출력하는 프로그램을 작성
# method 1
y1, y2, y3, y4 = map(int, input().split())
cnt = 0
if y1 == 1:
    cnt += 1
if y2 == 1:
    cnt += 1
if y3 == 1:
    cnt += 1
if y4 == 1:
    cnt += 1
# 도, 개 걸, 윷, 모 구분
if cnt == 0:
    print('모')
elif cnt == 1:
    print('도')
elif cnt == 2:
    print('개')
elif cnt == 3:
    print('걸')
elif cnt == 4:
    print('윷')