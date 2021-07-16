#  캔디팡(Candy Pang)
# 최근 캔디팡이라는 스마트폰 게임이 인기를 끌고 있다. 캔디팡은 7 * 7 모양의
# 격자 판에 같은 색깔이 연속 3개 이상인 부분을 찾아 터치하면 터지면서 점수를
# 얻는 게임이다. 이때 연속된 부분은 상, 하, 좌, 우만 판단한다.
# 위 캔디팡 화면에서 터치하면 터지는 영역은 총 4군데 존재한다.
# 캔디팡 격자 정보가 주어졌을 때 터치하면 터지는 영역의 개수를 출력하는
# 프로그램을 작성하시오.(위 예시 참고)
# 캔디팡 격자판(7 * 7)의 색깔 정보(1~5)가 입력된다.
# ※ 색깔정보
# 빨강 = 1 , 노랑 = 2 , 파랑 = 3 , 초록 = 4 , 보라 = 5
# 터치하면 터지는 영역의 개수를 출력한다.
# 위 예시에서 색깔이 연속 3개 이상인 부분은 4영역이 존재한다.
# method 1
import sys
sys.setrecursionlimit(100000)
graph = []
cnt = 0
for i in range(7):
    graph.append(list(map(int, input().split())))
def candy(x, y, color):
    if x <= -1 or x >= 7 or y <= -1 or y >= 7:
        return 0
    if graph[x][y] != color:
        return 0
    if graph[x][y] == color:
        graph[x][y] = 0
    return 1 + candy(x-1, y, color) + candy(x+1, y, color) + candy(x, y-1, color) + candy(x, y+1, color)
for i in range(7):
    for j in range(7):
        temp = 0
        if graph[i][j] != 0:
            temp =  candy(i, j, graph[i][j])
        if temp >= 3:
            cnt += 1
print(cnt)