# 삼각형 출력하기 2(print triangle)
# 길이 n이 입력되면 역삼각형을 출력한다.
# method 1
n = int(input())
for i in range(n):
    for j in range(n-i):
        print('*', end='')
    print()