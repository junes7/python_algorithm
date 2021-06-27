# int의 범위(minimum and maximum value of integers with hexadecimal expression)
# 앞으로 많이 사용될 변수 int 자료형의 범위를 알아내는 것이 이번 문제이다.
# int는 정수형이고 32비트 자료형이다. 2진수로 나타내면 가장 작은 숫자는
# 10000000 00000000 00000000 00000000 이고, 가장 큰 숫자는 
# 01111111 11111111 11111111 11111111 이다. 우리는 16진수 입력 방법을
# 이용하면 쉽게 이 문제를 해결할 수 있다.
# int형의 가장 작은수 a와 int형의 가장 큰수b를 차례대로 공백 분리하여 출력
# 출력 예) a b <- 이런 형태(a, b는 숫자값)
# method 1
# min, max = -0x80000000, 0x7fffffff
# print(min, max)
# method 2 매개변수 없이
print(-0x80000000, 0x7fffffff)