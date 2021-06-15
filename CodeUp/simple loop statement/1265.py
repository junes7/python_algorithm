# 구구단 출력하기 1(Print a Multiplication Table)
# 원하는 단을 입력하면 그 단의 구구단이 출력된다.
dan = int(input())
for i in range(1, 10):
    print(dan, '*', i, '=', dan*i, sep='')