# (함수 작성) 원의 넓이(area of circle)
# 함수명: circle, 매개 변수: 반지름(r)을 나타내는 정수형 변수 1개,
# 반환 형: 실수형, 함수 내용: 원의 넓이 함수 구현(원의 넓이=3.14XrXr)
# method 1
r = int(input())
def circle(n):
    return 3.14 * n * n
print('%.2f' % circle(r))