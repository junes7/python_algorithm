# 2차원배열 지그재그 채우기
# 입력이 n, m인 경우 n*m 크기의 
# 2차원 배열 지그재그 출력
# method 1
n, m = input().split()
n = int(n)
m = int(m)
b = []
t = n * m
for i in range(n):
    b.append([])
    for j in range(m):
        b[i].append(0)
for i in range(n):
    if n % 2 == 0:
        for j in range(m):
            b[i][j] = t
            t -= 1
        if i % 2 == 1:
            b[i].sort()
    else:
        for j in range(m-1, -1, -1):
            b[i][j] = t
            t -= 1
        if i % 2 == 1:
            b[i].sort(reverse=True)
# 입력 배열 확인
for i in range(n):
    for j in range(m):
        print(b[i][j], end=' ')
    print()