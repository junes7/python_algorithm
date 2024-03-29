# 블럭 채우기 2 (fill blocks)
# 다음과 같은 'ㄱ'자 모양의 블럭이 있다. 이 블럭을 이용하여 2∗n 크기의
# 직사각형 모양으로 채우려고 한다. 가능한 방법의 수를 구하여라. 'ㄱ'자
# 블럭은 무한정 있다고 가정한다. 이 때 숫자가 커질 수 있으므로 100,000,007
# 로 나눈 나머지를 출력하시오.
# 첫 줄에 n이 입력된다.(1<=n<=10,000)
# 2∗n 의 직사각형을 채울 수 있는 방법의 수에 100,000,007으로 나눈 나머지를
# 출력하시오.
# 3 2 (2^1) d(n-3) *2
# 6 4 (2^2)
# 9 8 (2^3)
# method 1 with memoization
# n = int(input())
# d = [0] * 10001
# def fillBlocks(n):
#     if n % 3 == 0:
#         d[n] = (2 ** (n//3)) % 100000007
#     return d[n]
# print(fillBlocks(n))
# method 2
import sys
sys.setrecursionlimit(1000000)
n = int(input())
d = [0] * 10001
def fillBlocks(n):
    if n == 3:
        return 2
    else:
        if d[n] != 0:
            return d[n]
        else:
            if n % 3 == 0:
                d[n] = (fillBlocks(n-3) * 2) % 100000007
            return d[n]
print(fillBlocks(n))