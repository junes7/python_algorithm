# 함수로 원하는 값의 위치 리턴하기 1 (return index of wanted value through function)
# 첫 줄에 데이터의 개수 n, 두 번째 줄에 n개의 데이터가 공백 두고 입력,
# 세 번재 줄에 값 k가 입력 | k값이 가장 처음 나타나는 위치를 출력
# method 1
n = int(input())
d = list(map(int, input().split()))
k = int(input())
def f(a):
    for i in range(n):
        if d[i] == a:
            return i+1
        else:
            if i == n-1:
                return -1
print('%d' % f(k))