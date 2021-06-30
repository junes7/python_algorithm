# 재귀로 * n개 한 줄로 출력하기
# method 1
n = int(input())
def f(n, t):
    if t > n:
        return
    else:
        print('*', end='')
        t += 1
        return f(n, t)
f(n, 1)