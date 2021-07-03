# 여러 점 간의 거리 (distance between multiple points)
# n개 점의 좌표(x, y)를 입력받아 각 점을 순서대로 연결한 총 거리를 구하는
# 프로그램을 작성하시오.
# 첫째 줄에 점의 개수 n | 둘째 줄부터 n+1번째 줄까지 점의 좌표
# 모든 점을 차례로 연결한 거리를 소수점 2째 자리까지 출력(소수점 아래 3째
# 자리까지 반올림)
# method 1
n = int(input())
d = [[0] * 2 for i in range(101)]
for i in range(n):
    d[i][0], d[i][1] = map(int, input().split())
dist = 0
for j in range(n-1):
    dist += ((d[j+1][0] - d[j][0])**2 + (d[j+1][1] - d[j][1])**2)**(1/2)
print('%.2f' %  dist)