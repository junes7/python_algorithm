# 함수로 가장 큰 값 위치 리턴하기
# method 1
n = int(input())
d = list(map(int, input().split()))
def f(data):
    max = 0
    for i in range(len(data)):
        if max < data[i]:
            max = data[i]
    for j in range(len(data)):
        if data[j] == max:
            return j+1
print(f(d))