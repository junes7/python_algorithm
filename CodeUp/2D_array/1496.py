# 두 개씩 묶어 작은 값 골라 배열 만들기 5-5
# create array after bundle two and pick a smaller value
# n개의 데이터를 배열에 입력 받은 후, 두 개씩 묶어 비교한 후, 작은 값이
# 들어간 배열을 만들고 출력해보자. 6개의 데이터가 다음과 같이 입력되었을
# 때(1 2 3 4 5 6), 다음과 같이 출력하면 된다(1 3 5). k번째 위치에
# 저장되어야 하는 값은 다음과 같이 표현할 수도 있다.
# m[k] = min(m[2*k], m[2*k+1]); //k >= 0
# 첫 번째 줄에 배열의 크기 n(짝수)이 입력된다.
# 두 번째 줄에 n개의 값(k)이 공백을 두고 입력된다.
# 두 개씩 묶어 비교한 후 작은 값만 골라 저장한 배열을 출력한다.
# method 1
n = int(input())
k = list(map(int, input().split()))
m = []
for i in range(0, n, 2):
    if k[i] < k[i+1]:
        m.append(k[i])
    else:
        m.append(k[i+1])
for i in range(len(m)):
    print(m[i], end=' ')