# 지그재그 출력하기(print zigzag)
# 높이 h와 반복횟수 r이 주어질 때, 별을 다음과 같이 지그재그로 출력하자.
# method 1
h, r = map(int, input().split())
for i in range(r):
    for j in range(1, h*2):
        if j <= h:
            for k in range(1, j+1):
                if k < j:
                    print(' ', end='')
                else:
                    print('*', end='')
        else:
            n = h*2 -j
            for l in range(1, n+1):
                if l < n:
                    print(' ', end='')
                else:
                    print('*', end='')
        print()