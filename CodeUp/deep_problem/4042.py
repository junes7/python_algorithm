# 격자 값 계산(calculate grid values)
# 5 X 5 격자판에 25개의 자연수가 있다.
# 18 78 53 45 1
# 64 85 12 16 75
# 45 35 28 75 90
# 2 15 28 11 37
# 75 41 7 89 25
# 여기서 1행의 최댓값은 78이고 2행은 85, 3행은 90, 4행은 37,
# 5행은 89이다. 1열의 최댓값은 75이고 2열은 85, 3열은 53, 4열은 89,
# 5열은 90이다.
# 각 행의 최댓값 합계는 379이고 각 열의 최댓값 합계는 392이다.
# 두 합계의 차이는 13이다.
# 첫째 줄부터 다섯째 줄까지 100 미만의 자연수들이 한 줄에 다섯 개씩
# 공백으로 구분되어 입력된다.
# 각 행의 최댓값 합계와 각 열의 최댓값 합계의 차를 절댓값으로 출력.
# method 1
d = []
for i in range(5):
    d.append(list(map(int, input().split())))
sRow, sCol = 0, 0
for i in range(5):
    maxRow, maxCol = 0, 0
    for j in range(5):
        if maxRow < d[i][j]:
            maxRow = d[i][j]
        if maxCol < d[j][i]:
            maxCol = d[j][i]
    sRow += maxRow
    sCol += maxCol
print(abs(sRow-sCol))