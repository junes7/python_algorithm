# 함수로 * n개 출력하기(print star n times through function)
# n개의 *을 한 줄로 출력한다.
# method 1
d = int(input())
def f(n):
    for i in range(n):
        print('*', end='')
f(d)