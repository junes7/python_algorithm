# 1의 개수는? 2
# number of 1
# 구글 입사 시험으로 1 ~ 1,000,000까지 1의 개수를 묻는 문제가 나온적이
# 있다. 이중 for문을 배웠으니 이 문제를 일반화 시켜 문제를 풀어보자.
# 시작 수 a와 마지막 수 b가 주어지면 a부터 b까지의 수 중 1이 몇 번 들어
# 있는지 세는 프로그램을 작성하시오.
# (숫자의 어느 위치에든 1이 있으면 개수를 센다)
# 1 10 -> 2
# method 1
a, b = map(int, input().split())
cnt = 0
for i in range(a, b+1):
    while True:
        if i // 10 == 0:
            if i % 10 == 1:
                cnt += 1
                break
            else:
                break
        else:
            if i % 10 == 1:
                cnt += 1
                i //= 10
            else:
                i //= 10
print(cnt)