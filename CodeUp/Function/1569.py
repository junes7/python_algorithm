# 함수로 배열의 최대값 위치 리턴하기 2
# return maximum position of array through function
# 데이터가 오름차순으로 저장되어있는 배열에서 원하는 데이터가 저장되어있는
# 가장 처음 위치를 출력. (원하는 데이터가 저장되어있지 않은 경우 -1 출력)
# 첫 줄에 데이터의 개수(n)가 입력
# 두 번째 줄에 n개의 오름차순 데이터(ki)가 공백을 두고 입력
# 세 번째 줄에 찾기 수행할 값(ki)이 입력
# method 1
n = int(input())
d = list(map(int, input().split()))
k = int(input())
def findi(a):
    r = 0
    for i in range(n):
        if d[i] == k:
            r = i+1
            break
        else:
            r = -1
    return r
print('%d' % findi(k))