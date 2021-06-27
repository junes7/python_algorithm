# (재귀 함수) 수 삼각형 출력하기(print triangle as number)
# 한 정수 n을 입력받아 n층의 수 삼각형을 출력하시오.
# method 1
n = int(input())
def print_num(t, a):
    if t < a:
        print()
        return
    else:
        print(a, end=' ')
        return print_num(t, a+1)
def num_tri(n, t):
    if n < t:
        return
    else:
        print_num(t, 1)
        return num_tri(n, t+1) 
num_tri(n, 1)