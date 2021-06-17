# 삼각형 출력하기 4
# 길이 n이 입력되면 다음 삼각형을 출력하시오.
# method 1
n = int(input())
for i in range(1, n*2):
    if i <= n:
        for j in range(i):
            print('*', end='')
    else:
        for k in range(n*2 - i):
            print('*', end='')
    print()