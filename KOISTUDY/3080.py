# 월 입력받아 계절 출력하기
# print season about input month
# 월을 입력받아 계절 이름을 출력해보자.
# 월 : 계절 이름
# 12, 1, 2 : winter
# 3, 4, 5 : spring
# 6, 7, 8 : summer
# 9, 10, 11 : fall
n=int(input())
if n//3==1:
    t='spring'
elif n//3==2:
    t='summer'
else:
    t='fall' if n//3==3 else 'winter'
print(t)