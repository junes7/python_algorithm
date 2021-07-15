# 진법 변환(convert notation)
# 10진수를 입력받아 2진수, 8진수, 16진수로 변환하는 프로그램을 작성하시오.
# 예를 들어 십진수 15를 입력받아서 2진수로 변환하면 "1111"이며, 8진수로
# 변환하면 "17"이며, 16진수로 변환하면 "F"이다.
# (단, 10진수는 1이상 32767 이하의 숫자를 입력하여야 하며, 이 범위안의
# 모든 경우를 만족하는 프로그램을 작성하여야 한다.)
# 하나의 10진수를 입력받는다.
n = int(input())
d = []
def conv_notation(n, k):
    if n == 0:
        print(k, end=' ')
        for i in range(len(d)-1, -1, -1):
            print(d[i], end='')
        d.clear()
        print()
        return
    else:
        if n % k < 10:
            d.append(n % k)
        else: # n % k >= 10
            d.append(chr(n % k + 55))
        return conv_notation(n//k, k)
conv_notation(n, 2)
conv_notation(n, 8)
conv_notation(n, 16)