# 함수로 plus/minus/0 판별하기(distinguish plus/minus/zero through function)
# 정수 1개를 입력 받아 양수인 경우 plus, 음수인 경우 minus, 0인 경우
# zero를 판별하여 출력하시오. 단, 함수 zero()와 plus()만 제출하시오.
d = int(input())
def zero(n):
    return True if n == 0 else False
def plus(n):
    return True if n > 0 else False
if (zero(d)):
    print('zero')
else:
    print('plus' if (plus(d)) else 'minus')