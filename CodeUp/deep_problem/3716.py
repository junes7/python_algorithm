# 블럭 채우기 5 (fill blocks)
# 3∗1∗1  블럭과 3∗2∗1 블럭을 이용해서 3∗n∗1 블럭 판을 맞추려고 한다.
# 가능한 모든 가짓수를 1,000으로 나눈 나머지를 구해보자.
# n 이 입력된다. (1<=n<=10,000)
# 블럭 판을 맞추는 모든 가짓수를 1,000으로 나눈 나머지를 출력한다.
# 1 1
# 2 2
# 3 6
# 4 11 | 11 = 6 + 2 + 1 * 3
# 5 23 | 23 = 11 + 6 + 2 * 3
# method 1
import sys
sys.setrecursionlimit(100000)
n = int(input())
d = [0] * 10001
def fillBlocks(n):
    if n == 1:
        d[n] = 1
    elif n == 2:
        d[n] = 2
    elif n == 3:
        d[n] = 6
    else:
        if d[n] != 0:
            return d[n]
        else:
            d[n] = (fillBlocks(n-1) + fillBlocks(n-2) + fillBlocks(n-3) * 3) % 1000
    return d[n]
print(fillBlocks(n))