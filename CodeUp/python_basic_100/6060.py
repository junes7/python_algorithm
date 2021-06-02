# 비트단위로 AND 하여 출력하기
# 두 정수를 비트단위(bitwise)로 and 계산을
# 수행한 결과를 10진수로 출력한다.
# method 1
a, b = input().split()
a = int(a)
b = int(b)
print(a & b)