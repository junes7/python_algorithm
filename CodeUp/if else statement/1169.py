# 나이 계산
# 나이가 주어지면 몇 년도에 태어났는지 출력(2012년 기준)
age = int(input())
sy = 2012
bd = sy - age + 1
if bd//100 == 19:
    print(bd-1900, 1)
else: # bd//100 == 20
    print(bd-2000, 3)