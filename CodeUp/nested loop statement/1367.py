# 평행사변형 출력하기 2(print parallelogram)
# 평행사변형의 높이 n이 주어진다. 옆 면이 대각선으로 이루어지는 평행사변형을
# 출력한다. 단, 공백은 왼쪽 위에 있다.
# method 1
n = int(input())
a = n*2
for i in range(n):
    for j in range(1, a):
        if j < a - n:
            print(' ', end='')
        else:
            print('*', end='')
    a -= 1
    print()