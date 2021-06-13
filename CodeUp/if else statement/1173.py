# 30분전
# 공백 기준 시간과 분이 주어지는데 30분전 시각 출력
# method 1
h , m = map(int, input().split())
if 30 <= m and m <= 59:
    print(h, m-30)
else:
    if h == 0:
        h = 24
    print(h-1, 60-(30-m))