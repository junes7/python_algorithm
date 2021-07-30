# 둘 다 참일 경우만 참 출력하기
# print if both integers are true
# 두 정수(a, b)를 입력받아 두 정수가 모두 True로 평가될 경우에만 True를,
# 그 외의 경우에는 False를 출력해 보자.
a,b=map(int,input().split())
print(bool(a)&bool(b))