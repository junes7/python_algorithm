# 삼각형의 성립 조건(Construction Condition of triangle)
# 세 개의 직선이 있고, 이 직선으로 삼각형을 만들 수
# 있는지 판단하는 프로그램을 작성 | 삼각형 성립 조건
# a, b, c가 변이 길이이고 c가 제일 긴 길이라고 한다면
# c < a + b이면 삼각형이 성립됨.
# method 1
a, b, c = map(int, input().split())
m = max(a, b, c)
if (m == c and m < a + b) or (m == a and m < b + c) or (m == b and m < a + c):
    print('yes')
else: 
    print('no')