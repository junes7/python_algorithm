# 함수로 절댓값 리턴하기 (return absolute value through function)
# 입력된 정수의 절댓값을 출력한다.
d = int(input())
def abs(n):
    return n * -1 if n < 0 else n
print('%ld' % abs(d))