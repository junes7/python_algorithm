# 함수로 Lower Bound 위치 리턴하기
# return lower bound through function
# 데이터가 오름차순으로 저장되어있는 배열에서 어떤 값보다 크거나 같은 값이
# 처음 나타나는 위치를 출력(저장되어있는 값들이 입력된 값보다 모두 작다면
# 저장되어있는 데이터개수 +1을 출력한다.)
# 첫 줄에 데이터의 개수(n)가 입력
# 두 번째 줄에 n개의 오름차순 데이터(ki)가 공백을 두고 입력
# 세 번째 줄에 찾기를 수행할 값(k)이 입력
# method 1
n = int(input())
d = list(map(int, input().split()))
k = int(input())
def lower_bound(a):
    idx = 0
    for i in range(n):
        if d[n-1] < a:
                idx = i+2
        else:
            if d[i] >= a:
                idx = i+1
                break
    return idx
print('%d' % lower_bound(k))