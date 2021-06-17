# 사각형 출력하기 2(print quadrangle)
# 길이 n이 입력되면 다음과 같은 사각형을 출력한다.
# method 1
n = int(input())
for i in range(1, n+1):
    if i == 1 or i == n:
        for j in range(n):
            print('*', end='')
    else:
        for k in range(1, n+1):
            if k == 1 or k == n:
                print('*', end='')
            else:
                print(' ', end='')
    print()