# 1차원 누적 합 배열 만들기 5-1
# create 1D cumulative sum array
# n개의 데이터를 배열에 입력 받은 후 1번째 ~ n번째 데이터까지의 합 배열을
# 만들고 출력해보자. 5개의 데이터가 다음과 같이 입력되었을 때, 1 2 3 4 5
# 다음과 같이 출력하면 된다. 1 3 6 10 15 | k번째 위치 저장 값은 다음과
# 같이 표현할 수 있다. s[k] = a[1] + a[2] + ... + a[k-1] + a[k]
# 첫 번째 줄에 배열의 크기 n이 입력, 두 번째 줄에 n개의 값이 공백을
# 두고 입력 | n개의 1차원 누적 합 데이터를 한 줄로 출력
# method 1
n = int(input())
d = list(map(int, input().split()))
s = [0] * n
t = 0
for i in range(n):
    t += d[i]
    s[i] = t
for x in range(n):
    print(s[x], end=' ')