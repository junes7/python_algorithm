# 점수 입력받아 평가 출력하기
# print evaluation of score
# 점수를 입력받아 평가를 출력해 보자.
# 점수 범위 : 평가
# 90 ~ 100 : A
# 70 ~ 89 : B
# 40 ~ 69 : C
# 0 ~ 39 : D
# 로 평가를 출력한다.
n=int(input())
if n>=90:
    t='A'
elif n>=70:
    t='B'
else:
    t='C'if n>=40 else 'D'
print(t)