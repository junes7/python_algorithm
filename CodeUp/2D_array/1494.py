# 1차원 차이 배열 만들기 5-3
# create 1D difference array
# 크기가 n인 1차원 배열 d[]에 대해 k개의 구간[s, e]와 u를 입력 받아,
# d[s] = d[s]+u; d[e+1] = d[e+1]-u; 를 수행 후, 누적 합을 만들어 출력.
# 첫 번째 줄에 배열의 크기 n과 구간의 개수 k가 공백을 두고 입력된다.
# 두 번째 줄부터 k개의 데이터가 공백을 두고 입력된다.
# 첫 번째 줄에는 배열의 상태, 두 번째 줄에는 누적합을 계산해 출력한다.
# method 1
n, k = map(int, input().split())
d = [0] * 200
sum = 0
for i in range(1, k+1):
    s, e, u = map(int, input().split())
    d[s-1] += u
    d[e] -= u
for i in range(n):
    print(d[i], end=' ')
print()
for j in range(n):
    sum += d[j]
    print(sum, end=' ')