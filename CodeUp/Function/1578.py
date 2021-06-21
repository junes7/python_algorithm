# (함수 작성) 최댓값 함수(maximum value function)
# 함수명: mymax, 매개 변수: 정수형 2개, 반환 형: 정수형
# 함수 내용: 두 정수 중 큰 값을 구하는 함수 구현
# method 1
a, b = map(int, input().split())
def mymax(x, y):
    return x if x >= y else y
print('%d' % mymax(a, b))