# 비트단위로 XOR 하여 출력하기
# print the result of bitwise xor
# 정수 2개를 입력받아 두 정수를 비트단위로 xor 연산한 후, 그 값을 정수로
# 출력해 보자. 비트단위(bitwise) xor 연산자 ^ 을 사용하면 된다.
# (^ : xor, circumflex/caret, 서컴플렉스/카릿)
# 주의: ^은 수학식에서 거듭제곱(power)을 나타내는 기호와 모양은 같지만,
# Python 언어에서는 전혀 다른 의미의 배타적 논리합(xor, 서로 다를 때
# True)의 의미를 가진다.
a,b=map(int,input().split())
print(a^b)