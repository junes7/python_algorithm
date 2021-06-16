# 자릿수 계산(Calculating digits)
# 어떤 숫자가 입력되면 그 숫자가 몇 자릿수 숫자인지 알아내는 프로그램을
# 작성하시오. | 1 이상의 자연수 n 입력
# method 1
n = int(input())
a, s = 1, 0
while n//a != 0:
    s += 1
    a *= 10
print(s)