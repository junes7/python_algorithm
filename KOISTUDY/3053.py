# 실수 2개 입렵받아 나눈 결과 계산하기
# calculate the result of division of two real numbers
# 실수 2개(f1, f2)를 입력받아 f1을 f2로 나눈 값을 출력해 보자.
# (*10을 3으로 나눈 값은 3.3333333333333333333....이다.)
a,b=map(float,input().split())
print(round(a/b,3))