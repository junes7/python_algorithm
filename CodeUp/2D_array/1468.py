# 2차원 배열 지그재그 채우기 2-1
# 입력이 n인 경우 n*n 크기 배열 지그재그로 채우기
# method 1
n = int(input())
b = []
t = 1
for i in range(n):
    b.append([])
    for j in range(n):
        b[i].append(t)
        t += 1
    if i % 2 == 1:
        b[i].sort(reverse=True)
# 입력 배열 확인
for i in range(n):
    for j in range(n):
        print(b[i][j], end=' ')
    print()