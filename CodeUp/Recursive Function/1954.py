# (재귀함수) 삼각형 출력하기 2 (print inverted triangle)
# 길이 n이 입력되면 역삼각형을 출력한다.
# method 1
n = int(input())
def invert_tri(n):
    if n < 1:
        return
    else:
        print('*' * n)
        n -= 1
        return invert_tri(n)
invert_tri(n)