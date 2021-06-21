# (함수 작성) 최솟값 함수(minimum value function)
# 함수명: mymin, 매개 변수: 정수형 2개, 반환 형: 정수형
# 두 정수 중 작은 값을 구하는 함수 구현
# method 1
a, b = map(int, input().split())
def mymin(x, y):
    return x if x <= y else y
print('%d' % mymin(a, b))