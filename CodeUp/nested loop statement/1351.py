# 구구단 출력하기 2(print Multiplication table)
# 시작단과 마지막 단을 입력하면 그 구간의 구구단을 출력하는 프로그램을 작성.
# method 1
a, b = map(int, input().split())
for i in range(a, b+1):
    for j in range(1, 10):
        print(i, '*', j, '=', i*j, sep='')