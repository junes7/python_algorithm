# 2차원 배열 순서대로 채우기 1-5
# 입력이 n, m인 경우 n*m 크기의 2차원 배열 출력
# method 1
n, m = input().split()
n = int(n)
m = int(m)
b = []
t = n * m
for i in range(n):
    b.append([])
    for j in range(m):
        b[i].append(t)
        t += -1
# 입력 확인
for i in range(n):
    for j in range(m):
        print(b[i][j], end=' ')
    print()