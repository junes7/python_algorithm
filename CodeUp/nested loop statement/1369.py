# 빗금 친 사각형 출력하기(print stranded rectangle)
# 별 모양 도형 출력하기에 재미를 붙인 철수는 이번에는 조금 어려운 빗금 친
# 사각형을 만들어 보기로 했다. n*n 사각형에서 k간격 마다 빗금을 친 사갹형을
# 출력하는 프로그램을 작성하시오.
# method 1
n, k = map(int, input().split())
for i in range(1, n+1):
    for j in range(1, n+1):
        if i == 1 or i == n or j == 1 or j == n:
            print('*', end='')
        elif (i+j-1) % k == 0:
            print('*', end='')
        else:
            print(' ', end='')
    print()