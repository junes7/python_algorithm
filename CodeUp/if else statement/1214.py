# 이 달은 몇일까지 있을까?(How many days will this month be?)
# 연도와 월을 말하면 그 달의 마지막 날이 며칠인지
# 알아맞히기로 하였다. 2월은 윤달(29)이 있어서 어렵다.
# 조건 1: 400의 배수인 해는 모두 윤년이다.
# 조건 2: 4의 배수인 해들 중 100의 배수가 아닌 해는
# 모두 윤년이다. 
# 마지막 날 31: 1, 3, 5, 7, 8, 10, 12
# 마지막 날 30: 4, 6, 9, 11
# method 1
y, m = map(int, input().split())
if (m <= 7 and m % 2 == 1) or (m >= 8 and m % 2 == 0):
    ld = 31
elif (m >= 4 and m % 2 == 0) or (m >= 9 and m % 2 == 1):
    ld = 30 
else:
    if (y % 400 == 0 or (y % 4 == 0 and y % 100 != 0)) and m == 2:
        ld = 29
    else:
        ld = 28
print(ld)