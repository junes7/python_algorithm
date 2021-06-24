# 지그재그 배열 3(zigzag array)
# 하나의 정수 n을 입력받아 n*n 사각형에서 다음과 같은 삼각형 모양으로
# 지그재그로 출력하시오. 예를 들어, n이 5이면,
# 0 0 0 0 5
# 0 0 0 4 6
# 0 0 3 7 12
# 0 2 8 11 13
# 1 9 10 14 15
# method 1
n = int(input())
d = [[0] * n for i in range(n)]
l = 0
s, e = 0, -1
for i in range(n-1, n*2-1):
    if n % 2 == 1:
        if i % 2 == 0:
            for j in range(n-1, e, -1):
                for k in range(s, n):
                    if j + k == i:
                        l += 1
                        d[j][k] = l
            s += 1
            e += 1
        else:
            for j in range(s, n):
                for k in range(n-1, e, -1):
                    if j + k == i:
                        l += 1
                        d[j][k] = l
            s += 1
            e += 1
    else:
        if i % 2 == 1:
            for j in range(n-1, e, -1):
                for k in range(s, n):
                    if j + k == i:
                        l += 1
                        d[j][k] = l
            s += 1
            e += 1
        else:
            for j in range(s, n):
                for k in range(n-1, e, -1):
                    if j + k == i:
                        l += 1
                        d[j][k] = l
            s += 1
            e += 1
for x in range(n):
    for y in range(n):
        print(d[x][y], end=' ')
    print()