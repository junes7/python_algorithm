# 평면 분할하기(small)
# split planet
# 무한한 평면 위에 n개의 무한한 직선들을 긋는다. 단, 모든 직선들은 평행하지
# 않고, 세 직선이 한 점에서 만나지 않는다. 그 후 생긴 평면들의 총 갯수를
# 구하여라. 수가 커질 수 있으니 137로 나눈 나머지를 출력하여라.
# method 1
import sys
sys.setrecursionlimit(40000)
n = int(input())
d = [0] * 40000
d[1] = 2
def splitP(n, t, cnt):
    if cnt > n:
        return d[n]
    else:
        d[cnt] = d[cnt-1] + t
        if cnt % 3 != 0:
            t += 1
        cnt += 1
        return splitP(n, t, cnt)
print(splitP(n, 2, 2) % 137)