# 참/거짓이 서로 같을 때에만 참 출력하기
# print true if both boolean values are same each other
# 두 정수(a, b)를 입력받아 두 정수가 서로 같은 불(boolean) 값으로
# 평가될 경우에는 True를 두 정수가 서로 다른 불 값으로 평가될 경우에는
# False를 출력해 보자.
a,b=map(int,input().split())
print(bool(not(a|b)or(a&b)))
# a=bool(a)
# b=bool(b)
# print(not(a or b)or(a and b))