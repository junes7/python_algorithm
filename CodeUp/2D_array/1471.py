# 2차원 배열 지그재그 채우기 2-4
# 입력이 n인 경우 n*n 크기 배열 지그재그로 채우기
# method 1
n = int(input())
b = []
for i in range(n):
    b.append([])
    for j in range(n):
        b[i].append(0)
# 값 채우기
s = 1
for i in range(n):
    for j in range(n):
        if i % 2 == 1:
            b[j][i] = s
        else:
            b[n-1-j][i] = s
        s += 1
# 입력 배열 확인
for i in range(n):
    for j in range(n):
        print(b[i][j], end=' ')
    print()