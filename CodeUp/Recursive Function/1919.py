# (재귀 함수) 숫자 거꾸로 출력하기 (print number backwards)
# 현우는 숫자를 좋아하는데 항상 숫자를 가지고 장난을 하고 숫자로 무엇가
# 만들기를 취미생활로 즐기고 있다. 하루는 어떤 숫자를 쓰고, 그 수를 거꾸로
# 쓰기로 했다. 어떤 수 N이 입력되면 그 수를 거꾸로 출력하는 프로그램 작성
# 그런데 현우는 문제를 수학적으로 풀어보는 것을 좋아하기 때문에, 변환 후
# 의미없는 0은 출력하지 않는다. 이 문제는 for, while, goto 등의 반복문은
# 사용할 수 없다. 2571 -> 1752, 1200 -> 21, 1203 -> 3021
# method 1
n = int(input())
def rem_rear_zero(n):
    return n if n % 10 != 0 else rem_rear_zero(n//10)
def invert_num(n):
    if n == 0:
        return
    else:
        print(n % 10, end='')
        return invert_num(n // 10)
if n == 0:
    print(n)
else:
    invert_num(rem_rear_zero(n))