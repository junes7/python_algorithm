# n개의 수 중 짝수의 개수
# 개수 n이 주어지고, 그 다음 줄에 무작위로 n개의
# 자연수가 입력되고, 그 중 짝수의 개수를 출력
# method 1
n = int(input())
a = list(map(int, input().split()))
cnt = 0
for i in range(n):
    if a[i] % 2 == 0:
        cnt += 1
print(cnt)