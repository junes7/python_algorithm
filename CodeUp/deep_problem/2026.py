# 16진수를 2진수로 변환하기(convert hexadecimal to binary number)
# 16진수가 입력되면 2진수로 변환하여 출력하시오.
# 예를 들어, 7AF 를 2진수로 변환하면, 0111 1010 1111이다.
# 입력으로 16진수가 입력되고 알파벳은 대문자로 입력된다.(각 자리는 : 0~9,
# A~F) (길이는 50,000글자 이내)
# 2진수로 변환하여 4자리씩 끊어서 출력한다. 단, 최상위 비트의 불필요한 0도
# 출력한다.( 1  -> 0001)
# method 1
s = input()
for i in range(len(s)):
    if s[i] >= 'A' and s[i] <= 'F':
        t = ord(s[i]) - 55
    else:
        t = int(s[i])
    b = 1
    r = 0
    while t != 0:
        r += t % 2 * b
        b *= 10
        t //= 2
    print('%04d' % r, end=' ')