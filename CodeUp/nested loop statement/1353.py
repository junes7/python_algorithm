# 삼각형 출력하기 1(print triangle)
# n이 입력되면 다음과 같은 삼각형을 출력하시오.
# method 1
n = int(input())
for i in range(1, n+1):
    for j in range(i):
        print('*', end='')
    print()