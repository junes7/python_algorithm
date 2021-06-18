# 2진수 변환(Binary Conversion)
# 어떤 10진수 n이 주어지면 2진수로 변환해서 출력하시오.
n = int(input())
# 2진수 저장할 배열
if n == 0:
    print(0)
else:
    b = []
    while n >= 0:
        if n == 0:
            break
        t = n % 2
        b.append(t)
        n //= 2
    for i in range(len(b)-1, -1, -1):
        print('%d' % b[i], end='')