# 언제까지 더해야 할까?
# 1, 2, 3, ... 을 계속 더해 나갈 때
# 그 합이 입력한 정수(0 ~ 1000)보다 같거나
# 작을 때까지만 계속 더하는 프로그램을 작성
# method 1
n = int(input())
i, s = 1, 1
while True:
    s += i    
    if s > n:
        break
    i += 1
print(i)