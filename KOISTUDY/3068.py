# 둘 다 거짓일 경우만 참 출력하기
# print ture if both boolean values are false
# 두 정수(a, b)를 입력받아 두 정수가 모두 False로 평가될 경우에만
# True를, 그 외의 경우에는 False를 출력해 보자.
a,b=map(int,input().split())
# print(bool(not(a|b)))
print(bool(not(a or b)))