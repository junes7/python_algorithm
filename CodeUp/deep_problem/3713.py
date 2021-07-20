# 블럭 채우기 3 (fill blocks)
# 2∗1 과 2∗2 크기의 사각형 블럭을 이용하여 2∗n 크기의 직사각형 모양으로
# 채우려고 한다. 가능한 방법의 수를 구하여라. 두 사각형 블럭은 무한정
# 있다고 가정한다. 이 때 숫자가 커질 수 있으므로 100,007로 나눈 나머지를
# 출력하시오.
# 첫 줄에 n이 입력된다.(1<=n<=10,000)
# 2∗n 의 직사각형을 채울 수 있는 방법의 수에 100,007으로 나눈 나머지를
# 출력하시오.
# 1 1
# 2 3
# 3 5
# 4 11
# 5 21
# 21 = 11 + 5 * 2
# method 1 memoization
import sys
sys.setrecursionlimit(100000)
n = int(input())
d = [0] * 10001
def fillBlocks(n):
    if n == 1:
        d[n] = 1
        return d[n]
    elif n == 2:
        d[n] = 3
        return d[n]
    else:
        if d[n] != 0:
            return d[n]
        else:
            d[n] = (fillBlocks(n-1) + fillBlocks(n-2) * 2) % 100007
            return d[n]
print(fillBlocks(n))