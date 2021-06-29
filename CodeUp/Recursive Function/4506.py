# 최대공약수(GCD, Greatest Common Divisor)와
# 최소공배수(LCM Least Common Multiple)
# 두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을
# 작성하시오.
# 입력 파일의 첫째 줄에는 두 개의 자연수가 주어진다. 이 둘은 10,000이하의
# 자연수이며 사이에 한 칸의 공백이 주어진다.
# 첫째 줄에는 입력으로 주어진 두 수의 최대공약수를, 둘째 줄에는 입력으로
# 주어진 두 수의 최소 공배수를 출력한다.
# method 1
a, b = map(int, input().split())
def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)
print(gcd(a, b))
t = gcd(a, b)
print(t * a//t * b//t)