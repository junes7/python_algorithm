# (재귀함수) 2진수 변환(convert decimal to binary)
# 어떤 10진수 n이 주어지면 2진수로 변환해서 출력하시오.
# 10 -> 1010 2 -> 10
# method 1 with memoization
n = int(input())
bit, s = 1, 0
def bin(x, a, b):
    if x == 0:
        return b
    else:
        if x % 2 == 1:
            t = a*(x%2)
            b += t
            a *= 10
            x //= 2
            return bin(x, a, b)
        else: # x % 2 == 0
            a *= 10
            x //= 2
            return bin(x, a, b)
print(bin(n, bit, s))