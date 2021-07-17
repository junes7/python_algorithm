# 약수의 구간 길이(small)(the length of the interval of a factor)
# 민아는 이번에도 민서를 위해 새로운 게임을 준비했다. 규칙은 간단하다.
# 입력으로 자연수 N이 주어진다. 1부터 N까지의 자연수 중에서 약수의
# 개수가 가장 많은 자연수의 최솟값부터 입력 N까지의 길이를 구하여
# 말하는 것이다. 이번에도 민서를 도와주자
# 입력: 2<=N<=100,000 | 구간의 길이를 출력한다.
#  method 1
n = int(input())
d = {}
max = 0
if n == 1:
    print(1)
else:
    d[1] = 1
    for i in range(2, n+1):
        ri = int(i ** (1/2))
        cnt = 0
        for j in range(1, ri+1):
            if i % j == 0:
                if j == i//j:
                    cnt += 1
                else:
                    cnt += 2
        if max < cnt:
            max = cnt
        d[i] = cnt
for key, value in d.items():
    if value == max:
        st = key
        break
print(n-st+1)