# (재귀함수) 팩토리얼 계산(calculate factorial)
# 팩토리얼(!)은 다음과 같이 정의된다.
# n! = n X (n-1) X (n-2) X ... X 2 X 1
# 즉, 5! = 5 X 4 X 3 X 2 X 1 = 120이다. n이 입력되면 n!의 값을 출력하시오.
# method 1
n = int(input())
f = 1
def facto(a, m):
    if a == 0 or a == 1:
        print(m)
        return
    else:
        return facto(a-1, m*a)
facto(n, f)