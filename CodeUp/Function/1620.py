# 자릿수의 합(sum of digits)
# 어떤 수 n이 입력되면 n의 각 자릿수의 합이 한 자리가 될 때까지 계산하여
# 출력
# method 1
d = int(input())
def sum_digits(n):
    s = 0
    while n > 0:
        s += n % 10
        n //=10
    return s
while d >= 10:
    d = sum_digits(d)
print('%d' % d)