# 2차원 누적 합 배열 만들기 5-2
# create 2D cumulative sum array
# n*m개의 데이터를 배열에 입력 받은 후, (1, 1) 데이터 ~ (n, m)영역의
# 누적 합 배열을 만들고 출력해보자.
# method 1
n, m = map(int, input().split())
d = [[0] * m for i in range(n)]
for i in range(n):
    t = list(map(int, input().split()))
    d[i] = t
s = [[0] * m for i in range(n)]
tm = 0
a = [0] * m
for i in range(n):
    for j in range(m):
        a[j] += d[i][j]
        if j == 0:
            s[i][j] = a[j]
        else:
            tm = s[i][j-1] + a[j]
            s[i][j] = tm
for x in range(n):
    for y in range(m):
        print(s[x][y], end=' ')
    print()