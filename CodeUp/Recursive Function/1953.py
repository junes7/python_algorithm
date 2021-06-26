# (재귀함수) 삼각형 출력하기 1
# n이 입력되면 다음과 같은 삼각형을 출력하시오.
# method 1
n = int(input())
t = 1
def triangle(n, t):
    if t > n:
        return
    else:
        print('*' * t)
        t += 1
        return triangle(n, t)
triangle(n, t)