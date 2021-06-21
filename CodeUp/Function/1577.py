# (함수 작성) 절댓값 함수 1(absolute value function)
# 이 문제는 절댓값 함수를 구현하는 문제입니다.
# 함수명: myabs, 매개 변수: 정수형 1개, 반환 형: 정수형
# method 1
d = int(input())
def myabs(n):
    return n * -1 if n < 0 else n
print('%d' % myabs(d))