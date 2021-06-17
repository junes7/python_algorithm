# 사각형 출력하기 1(print quadrangle)
# 길이 n이 입력되면 길이가 n인 사각형을 출력. 사각형은 *모양으로 채운다.
# method 1
n = int(input())
for i in range(n):
    for i in range(n):
        print('*', end='')
    print()