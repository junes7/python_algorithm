# Linear Structure Search
# n개의 정수로 이루어진 수열이 있다. 이 정수열에서 k가 어느위치에 있는지
# 검색하는 프로그램을 작성하시오.
# 첫번째 줄에는 자료의 수 n과 k가 공백으로 구분되어 입력된다.
# 둘째줄에는 n개의 정수가 공백으로 구분되어 차례로 입력된다.(1<=n<=100,000)
# k가 몇 번째 자료인지 출력하시오. 만약 k가 존재하지 않는다면 -1을 출력.
# (단, 찾는 값이 여러 개 존재할 경우에는 제일 먼저나오는 값의 인덱스를 출력.)
# method 1
n, k = map(int, input().split())
d = list(map(int, input().split()))
r = -1
for i in range(n):
    if d[i] == k:
        r = i+1
        break
    else:
        continue
print(r)