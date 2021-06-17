# 삼각형 출력하기 3(print triangle)
# 길이 n이 입력되면 다음과 같은 역삼각형을 출력한다.
# method 1
n = int(input())
for i in range(n):
    for j in range(i):
        print(' ', end='')
    for k in range(n-i):
        print('*', end='')
    print()