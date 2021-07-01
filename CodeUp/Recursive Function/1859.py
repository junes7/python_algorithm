# 별 삼각형 출력하기(print star triangle)
# 한 정수 n을 입력받아 n층의 별 삼각형을 출력하시오.
# method 1 with memoization
n = int(input())
def starTri(n, t):
    if n < t:
        return
    else:
        print('*'*t, sep='')
        t += 1
        return starTri(n, t)
starTri(n, 1)