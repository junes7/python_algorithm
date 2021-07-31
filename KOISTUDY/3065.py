# 하나라도 참이면 참 출력하기
# print true if one thing is true
# 두 정수(a, b)를 입력받아 a나 b 중에서 하나라도 True로 평가될 경우에는
# True를, 모두 False로 평가되는 경우에는 False를 출력해 보자.
a,b=map(int,input().split())
print(bool(a)|bool(b))