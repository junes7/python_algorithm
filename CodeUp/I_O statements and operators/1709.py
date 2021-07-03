# 내림차순 정렬(sort in descending order)
# 데이터를 입력받아 내림차순으로 정렬하는 프로그램을 작성하시오.
# 첫줄에는 데이터의 개수를 입력받는다.(100이하의 정수)
# 다음 줄에는 데이터가 입력된다.(100이하의 정수)
# 정렬된 데이터가 출력된다.
# method 1
n = int(input())
d = list(map(int, input().split()))
for i in range(n-1, -1, -1):
    for j in range(i):
        if d[j] < d[j+1]:
            l = d[j]
            d[j] = d[j+1]
            d[j+1] = l
for i in range(n):
    print(d[i], end=' ')