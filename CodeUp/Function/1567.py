# 함수로 배열의 부분합 리턴하기
# 배열의 참조 범위([a, b], a번부터 ~ b번까지 범위, 폐구간 [a, b])를
# 입력 받아 그 범위의 부분합을 출력하시오.
# 첫 줄에 데이터의 개수(n)가 입력
# 두 번째 줄에 n개의 데이터(ki)가 공백을 두고 입력
# 세 번째 줄에 부분합을 수행할 시작 번호와 마지막 번호가 공백 두고 입력
# method 1
n = int(input())
d = list(map(int, input().split()))
a, b = map(int, input().split())
def subsetsum(x, y):
    s = 0
    for i in range(a-1, b):
        s += d[i]
    return s
print('%d' % subsetsum(a, b))