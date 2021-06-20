# 함수로 배열의 최대값 위치 리턴하기
# return maximum position of array through function
# 배열의 참조 범위([a, b], a번부터 ~ b번까지 범위, 폐구간 [a, b])를
# 입력 받아 그 범위에서 가장 큰 값이 처음 나타난 위치를 출력하시오.
# 첫 줄에 데이터의 개수(n)가 입력
# 두 번째 줄에 n개의 데이터(ki)가 공백을 두고 입력
# 세 번째 줄에 최대값 찾기 수행할 구간 시작 번호와 마지막 번호가 입력
# method 1
n = int(input())
d = list(map(int, input().split()))
a, b = map(int, input().split())
def maxi(x, y):
    max = d[x-1]
    idx = x
    for i in range(x, y):
        if max < d[i]:
            max = d[i]
            idx = i+1
    return idx
print('%d' % maxi(a, b))