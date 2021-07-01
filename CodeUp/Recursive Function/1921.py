# 진법 변환(base bit conversion)
# 현재 우리가 일반적으로 사용하고 있는 진법은 10진법이다. 
# 0, 1, 2, 3, 4, 5, 6, 7, 8, 9로 구성된 10개의 기호로 모든 수를 표현한다.
# 하지만 디지털의 세계에는 0, 1로만 구성된 2진법과 이를 쉽게 표현하기 위한
# 16진법을 사용한다. 2진법은 0, 1의 2가지 기호, 16진법은 0, 1, 2, 3, 4, 5,
# 6, 7, 8, 9, A, B, C, D, E, F로 구성된 16가지 기호로 모든 숫자를 표현한다.
# 이 문제의 목적은 주어진 10진수 n을 k진법의 수로 변환하는 것이다.
# 2진수: binary number, 8진수: octal number, 10진수: decimal number,
# 16진수: hexadecimal number
# method 1
import sys
n, k = map(int, sys.stdin.readline().strip().split())
d = []
def prt(k):
    if k < 0:
        return
    else:
        if d[k] < 10:
            print('%d' % d[k], end='') 
        else:
            print('%c' % (d[k]+55), end='')
        k -= 1
        return prt(k)
def baseConv(n, k):
    if n == 0:
        prt(len(d)-1)
        return
    else:
        d.append(n % k)
        n //= k
        return baseConv(n, k)
baseConv(n, k)