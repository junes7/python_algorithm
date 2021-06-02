# 비트단위로 OR 하여 출력하기
# 입력된 정수 두 개를 비트단위로 or 연산한 후
# 그 결과를 10진수로 출력한다.
# method 1
a, b = input().split()
a = int(a)
b = int(b)
print(a | b)