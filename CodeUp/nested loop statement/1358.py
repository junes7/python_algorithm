# 삼각형 출력하기 5
# 어떤 수 n을 입력받으면 다음과 같은 삼각형을 출력한다.
# 여기서 입력되는 n은 반드시 홀수이다.
n = int(input())
a, b = n//2, n//2
for i in range(n//2 + 1):
    for j in range(n):
        if j < a or j > b:
            print(' ', end='')
        else:
            print('*', end='')
    a -= 1
    b += 1
    print()