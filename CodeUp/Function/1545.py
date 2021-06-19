# 함수로 true(1) / false(0) 리턴하기(return true or false through function)
# 정수 1개 입력, 0인 경우 zero, 0이 아닌 경우 non zero를 판별하여 출력
# method 1
d = int(input())
def zero(n):
    return True if n == 0 else False
print('zero' if (zero(d)) else 'non zero')