# 최댓값, 최솟값(maximum, minimum)
# 5개의 정수들의 최댓값과 최솟값을 구하는 프로그램을 작성하라.
# 첫째줄에 최댓값을 출력, 둘째줄에 최솟값을 출력
# method 1
n = int(input())
max, min = n, n
for i in range(4):
    t = int(input())
    if max < t:
        max = t
    if min > t:
        min = t
print(max, min, sep='\n')