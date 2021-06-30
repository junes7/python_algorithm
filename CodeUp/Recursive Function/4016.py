# 세 수의 최대공약수 구하기(Get GCD of three integers)
# 세 수를 입력받아 세 수의 최대공약수를 구하는 프로그램을 작성하시오.
# 첫 줄에 세 수가 주어진다.(단,1 <= a <= b <= c <= 100,000 )
# 출력내용은 세 수의 최대공약수를 출력한다.
# method 1
import sys
a, b, c = map(int, sys.stdin.readline().strip().split())
def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)
new_b = gcd(b, a)
print(gcd(c, new_b))