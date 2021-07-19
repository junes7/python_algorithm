# 블럭 채우기 1 (Small) (fill blocks)
# 2∗1 의 직사각형 블럭을 이용하여 2∗n 크기의 직사각형 모양으로 채우려고
# 한다. 가능한 방법의 수를 구하여라. 2∗1 직사각형 블럭은 무한정 있다고
# 가정한다.
# 첫 줄에 n이 입력된다.(1<=n<=30)
# 2∗n 의 직사각형을 채울 수 있는 방법의 수를 출력하시오.
# 1 1
# 2 2
# 3 3
# 4 5
# method 1 with memoization
n = int(input())
d = [0] * 31
def fillBlock(n):
    if n == 1:
        d[n] = 1
        return d[n]
    elif n == 2:
        d[n] = 2
        return d[n]
    else:
        if d[n] != 0:
            return d[n]
        else:
            d[n] = fillBlock(n-1) + fillBlock(n-2)
            return d[n]
print(fillBlock(n))