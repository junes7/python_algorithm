# 블럭 채우기 4 (fill blocks)
# 'ㄱ'자 모양 블럭과 1∗1의 직사각형 블럭을 이용하여 2∗n 크기의 직사각형
# 모양으로 채우려고 한다. 가능한 방법의 수를 구하여라. 블럭은 무한정
# 있다고 가정한다. 이 때 숫자가 커질 수 있으므로 100,007로 나눈 나머지를
# 출력하시오.
# 첫 줄에 n이 입력된다.(1<=n<=10,000)
# 2∗n 의 직사각형을 채울 수 있는 방법의 수에 100,007으로 나눈 나머지를
# 출력하시오.
# 1 1
# 2 5
# 3 11
# 4 33 | 33 = 11 + 5 * 4 + 1 * 2
# 5 87 | 87 = 33 + 11 * 4 + 5 * 2
# method 1
import sys
sys.setrecursionlimit(100000)
n = int(input())
d = [0] * 10001
def fillBlocks(n):
    if n == 1:
        d[n] = 1
    elif n == 2:
        d[n] = 5
    elif n == 3:
        d[n] = 11
    else:
        if d[n] != 0:
            return d[n]
        else:
            d[n] = (fillBlocks(n-1) + fillBlocks(n-2) * 4 + fillBlocks(n-3) * 2) % 100007
    return d[n]
print(fillBlocks(n))