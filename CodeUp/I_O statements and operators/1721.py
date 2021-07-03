# 두 점 간의 거리(distance between two points)
# 두 점의 좌표(x, y)를 입력받아 두 점 간의 거리를 구하는 프로그램을 작성하시오.
# 첫째 줄에 첫 번째 점의 x와 y값, 둘째 줄에 두 번째 점의 x와 y값이 입력된다.
# 두 점 간의 거리를 소수점 2째 자리까지 출력(소수점 아래 3째 자리에서 반올림)
# method 1
x1, y1 = map(int, input().split())
x2, y2 = map(int, input().split())
dist = ((x2-x1)**2 + (y2-y1)**2) ** (1/2)
print('%.2f' % dist)