# 함수로 가장 작은 값 리턴하기
# 가장 작은 값을 출력한다.
# method 1
n = int(input())
d = list(map(int, input().split()))
def f(data):
    min = data[0]
    for i in range(len(data)):
        if min > data[i]:
            min = data[i]
    return min
print(f(d))