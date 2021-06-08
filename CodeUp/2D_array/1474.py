# 2차원배열 지그재그 채우기 2-7
# 입력이 n, m인 경우 n*m 크기의 
# 2차원 배열 지그재그 출력
# method 1
n, m = input().split()
n = int(n)
m = int(m)
b = []
for i in range(n):
    b.append([])
    for j in range(m):
        b[i].append(0)
t = n * m
for i in range(m):
    if m % 2 == 0:
        for j in range(n-1, -1, -1):
            if i % 2 == 0:
                b[j][i] = t
            else:
                b[n-1-j][i] = t
            t -= 1
    else:
        for j in range(n):
            if i % 2 == 0:
                b[j][i] = t
            else:
                b[n-1-j][i] = t
            t -= 1
for i in range(n):
    for j in range(m):
        print(b[i][j], end=' ')
    print()