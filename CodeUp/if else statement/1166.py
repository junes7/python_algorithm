# 윤년 판별(leap year discrimination)
# 2월 29일까지 있는 해를 윤년이라고 하는데, 입력된 해가
# 윤년인지 아닌지 판별하시오. 윤년 판단 조건)
# 1. 해(year)가 4의 배수이면서 100의 배수가 아니면 윤년
# 2. 400의 배수이면 윤년
# method 1
# y = int(input())
# if (y % 4 == 0 and y % 100 != 0) or (y % 400 == 0):
#     print('yes')
# else:
#     print('no')
# method 2
y = int(input())
print('yes' if (y % 4 == 0 and y % 100 != 0) or (y % 400 == 0) else 'no')