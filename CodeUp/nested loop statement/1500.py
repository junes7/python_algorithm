# 2차원 배열에 값 저장하기(save value in 2D array)
# n행 m열의 2차원 배열에 값을 저장하고 출력하려고 한다. 첫째 줄에 2차원
# 배열의 크기 n과 m을 입력받고, 각각의 데이터를 2차원 배열에 저장한 다음
# 그대로 출력하시오.
# 첫째 줄에 n과 m이 입력된다. (1 <= n, m <= 100) 각각의 데이터는 int
# 둘째 줄부터 n X m의 데이터가 차례대로 입력된다.
# n X m 크기의 2차원 배열을 출력한다.
# method 1
n, m = map(int, input().split())
d = [[0] * m for i in range(n)]
for i in range(n):
    d[i] = list(map(int, input().split()))
for i in range(n):
    for j in range(m):
        print(d[i][j], end=' ')
    print()