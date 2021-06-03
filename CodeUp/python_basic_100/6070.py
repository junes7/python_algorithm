# 월 입력받아 계절 출력하기
# 월 입력될 때 계절 이름이 출력되도록 해보자!
# 월 : 계절 이름
# 12, 1, 2 : winter
# 3, 4, 5 : spring
# 6, 7, 8 : summer
# 9, 10, 11 : fall
# 월을 의미하는 1개의 정수가 입력된다.
# method 1
n = int(input())
n//=3
if n == 0 or n == 4:
    print('winter')
elif n == 1:
    print('spring')
elif n == 2:
    print('summer')
elif n == 3:
    print('fall')