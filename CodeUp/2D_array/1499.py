# 여러 개씩 묶어 큰 값 골라 배열 만들기 5-8
# create array after bundle several things and choose a larger value
# n개의 데이터를 배열에 입력 받은 후, g개씩 묶어 비교한 후, 큰 값만
# 들어간 배열을 만들고 출력해보자. 6개의 데이터가 다음과 같이 입력되었을
# 때(1 2 3 4 5 6), 3개씩 묶어 비교한 후, 큰 값만 들어간 배열을 만들어
# 아래와 같이 출력하면 된다(3 6).
# 첫 번째 줄에 배열의 크기 n과 묶을 개수 g가 입력된다.
# 두 번째 줄에 n개의 값(k)이 공백을 두고 입력된다.
# g개 씩 묶어 비교한 후 큰 값만 골라 저장한 배열을 출력한다.
# method 1
n, g = map(int, input().split())
k = list(map(int, input().split()))
for i in range(0, n, g):
    max = k[i]
    for j in range(i, g+i):
        if j < n:
            if max < k[j]:
                max = k[j]
    print(max, end=' ')