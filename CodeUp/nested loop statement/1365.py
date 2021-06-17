# 사각형 출력하기 3
# 별로 사각형을 출력하는 문제인데 여기서는 대각선을 출력해야 한다.
# 1. n이 입력된다. 2. 대각선이 포함된 n*n 사각형을 출력한다.
# method 1
n = int(input())
a, b = 1, n
for i in range(1, n+1):
    if i == 1 or i == n:
        for j in range(n):
            print('*', end='')
    else:
        a += 1
        b -= 1
        for k in range(1, n+1):
            if k==1 or k==a or k==b or k==n:
                print('*', end='')
            else:
                print(' ', end='')
    print()