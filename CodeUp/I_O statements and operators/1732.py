# 나눗셈과 제곱(division and square)
# 정수 a, b 두 개를 입력받아서 출력할 때, 첫째 줄에 a / b의 소수점 첫째 자리까지
# 계산한 결과(몫)와 둘째 줄에 소수점 이하를 버린 나눗셈 결과(몫)를 출력하고, 셋째
# 줄에 a^b의 결과를 출력하시오.
# 예를 들어 5 2가 입력되면,
# 2.5
# 2
# 25가 출력되어야 한다.
# 4 3
# 1.3
# 1
# 64
# method 1
a, b = map(int, input().split())
print('%.1f' % float(a/b))
print(a//b)
print(a ** b)