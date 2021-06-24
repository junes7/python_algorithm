# 농사짓기 가장 좋은 땅 고르기(pick best land for farming)
# 교원이는 전체 가로 m칸, 세로 n칸 크기의 땅에서 가장 비옥한 구역을 찾아
# 농사를 지으려고 한다. 비옥도(k)는 각 칸에 0~99 사이에 숫자로 표시되며,
# 교원이가 농사를 짓기 위해 골라야 하는 땅의 크기는 가로 x칸, 세로 y칸이다.
# 구역 비옥도(ka)를 각 칸 비옥도(k)의 합으로 결정한다면, 입력받은 땅 
# 데이터에서 교원이가 찾을 수 있는 구 역 비옥도(ka)의 최댓값을 구하는
# 프로그램을 작성하시오.
# 예를 들어, 전체 가로 4칸, 세로 4칸 크기의 땅의 비옥도가 그림과 같이
# 주어져 있을 때, 교원 이가 농사를 짓기 위해 골라야 하는 땅의 크기가
# 가로 2칸, 세로 2칸 이라고 한다면, 구역 비옥도(ka)의 최댓값은 색칠된
# 영역에 해당되는 수의 합이다. (3+4+1+7=15)
# method 1
m, n, x, y = map(int, input().split())
f = [[0] * m for i in range(n)]
for i in range(n):
    f[i] = list(map(int, input().split()))
max_sum, t = 0, 0
for i in range(n-y+1):
    for j in range(m-x+1):
        for k in range(y):
            for l in range(x):
                t += f[i+k][j+l]   
        if max_sum < t:
            max_sum = t
        t = 0
print(max_sum)